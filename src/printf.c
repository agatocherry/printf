/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 15:25:39 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/11 14:10:57 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

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
			str = search_flags(str, &display, flags, parameters);
		else
		{
			ft_putchar(*str);
			display++;
		}
		str++;
	}
	return (display);
}
