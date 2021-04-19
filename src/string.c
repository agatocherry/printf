/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:23:26 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/19 12:08:05 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static void	process(t_flags flags[4], int len)
{
	if (flags[2].negative == 1)
	{
		flags[1].count = flags[2].count;
		flags[2].count = -1;
	}
	if (flags[0].negative == 1)
	{
		flags[1].count = flags[0].count;
		flags[0].count = -1;
	}
	while (flags[2].count > len)
	{
		ft_putchar('0');
		flags[2].count--;
	}
	while (flags[0].count > len)
	{
		ft_putchar(' ');
		flags[0].count--;
	}
}

void		argument_string(int *display, va_list parameters, t_flags flags[4])
{
	int		len;
	char	*str;

	str = va_arg(parameters, char *);
	len = ft_strlen(str);
	if (flags[3].count < len && flags[3].count != -1)
		len = flags[3].count;
	process(flags, len);
	ft_putnstr(str, len);
	while (flags[1].count > len)
	{
		ft_putchar(' ');
		flags[1].count--;
	}
}
