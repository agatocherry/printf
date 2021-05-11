/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_lower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:46:34 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/11 17:32:52 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static void	pre_pre_process(int *len, int *display, t_flags flags[4])
{
	if (flags[2].count != -1 && flags[3].count == 0 && flags[3].is_star == 1)
		flags[2].count -= (*len - 1);
	if (flags[0].count != -1 && flags[0].negative == 1)
	{
		flags[1].count = flags[0].count;
		flags[0].count = -1;
	}
	else if (flags[0].count != -1 && flags[0].negative == 1
	&& flags[3].count != -1)
	{
		flags[1].count = flags[0].count;
		flags[0].count = -1;
		flags[3].count = -1;
	}
	if (flags[2].count != -1 && flags[2].negative == 1 && flags[3].count != -1)
	{
		flags[1].count = flags[2].count;
		flags[2].count = -1;
	}
}

static void	pre_process(int *len, int *display, t_flags flags[4])
{
	pre_pre_process(len, display, flags);
	if (flags[2].count != -1 && flags[2].negative == 1)
	{
		flags[1].count = flags[2].count;
		flags[2].count = -1;
	}
	if (flags[3].count != 1 && flags[3].negative == 1)
		flags[3].count = -1;
	else if (flags[2].count != -1 && flags[3].count != -1)
	{
		flags[0].count = flags[2].count;
		flags[2].count = -1;
		if (flags[3].count == 0)
			flags[0].count++;
	}
	if (flags[0].count != -1 && flags[3].count > 0 && flags[3].count < *len)
		flags[0].count -= (*len - flags[3].count);
}

static void	process(t_flags flags[4], int len, int *display, int no_put)
{
	if (flags[3].count > 0)
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
	if (flags[3].count == -4 && save != 0)
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

void		argument_hexa_lower(int *display, va_list parameters,
			t_flags flags[4])
{
	int				len;
	unsigned int	pointer;
	int				save;
	int				no_put;

	no_put = 0;
	save = 0;
	pointer = va_arg(parameters, unsigned int);
	len = ft_hexalen((long)pointer);
	if (pointer == 0)
		len++;
	if (pointer == 0 && flags[3].count == 0)
		flags[0].count++;
	if (pointer == 0 && flags[3].count == 0)
		no_put = 1;
	if (flags[3].count > len)
		save = flags[3].count;
	pre_process(&len, display, flags);
	process(flags, len, display, no_put);
	if (save != 0 || no_put == 0)
		ft_puthexa_lower((long)pointer);
	if (no_put == 1)
		len--;
	end_process(flags, len, display, save);
	*display += len;
}
