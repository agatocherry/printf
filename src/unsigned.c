/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 11:19:25 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/22 16:11:18 by agcolas          ###   ########.fr       */
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

static void	ft_putuint(unsigned long n)
{
	if (n > 9)
	{
		ft_putuint(n / 10);
	}
	ft_putchar('0' + n % 10);
}

static void	process(t_flags flags[4], int len, int *display)
{
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

static void	pre_process(int len, int *display, t_flags flags[4])
{
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
}

void		argument_unsigned(int *display, va_list parameters,
			t_flags flags[4])
{
	int				len;
	unsigned long	nb;

	nb = va_arg(parameters, unsigned int);
	len = nb_len(nb);
	pre_process(len, display, flags);
	process(flags, len, display);
	ft_putuint(nb);
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
