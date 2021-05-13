/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 15:25:39 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/13 12:09:01 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static int	cspdiux(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

static void	no_cspdiux(t_flags flags[4], int *display, const char *str)
{
	if (*str)
	{
		while (flags[0].count > 1)
		{
			ft_putchar(' ');
			*display += 1;
			flags[0].count--;
		}
		while (flags[2].count > 1)
		{
			ft_putchar('0');
			*display += 1;
			flags[2].count--;
		}
		ft_putchar(*str);
		*display += 1;
		if (flags[1].count != -1)
		{
			while (flags[1].count > 1)
			{
				ft_putchar(' ');
				*display += 1;
				flags[1].count--;
			}
		}
	}
}


int		ft_printf(const char *str, ...)
{
	int		display;
	t_flags	flags[4];
	va_list	parameters;

	va_start(parameters, str);
	display = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str = search_flags(str, &display, flags, parameters);
			if (cspdiux(*str) != 1)
				no_cspdiux(flags, &display, str);
		}
		else
		{
			ft_putchar(*str);
			display++;
		}
		str++;
	}
	return (display);
}
