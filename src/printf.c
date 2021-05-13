/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 15:25:39 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/13 17:38:24 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static int	cspdiux(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
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
				return (display);
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
