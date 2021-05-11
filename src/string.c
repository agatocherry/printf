/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:23:26 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/05 15:17:44 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static void	pre_process(int len, int *display, t_flags flags[4])
{
	if (flags[0].count != -1 && flags[0].negative == 1)
	{
		flags[1].count = flags[0].count;
		flags[0].count = -1;
	}
}

static void	process(t_flags flags[4], int *len, int *display)
{
	if (flags[3].count != -1 && flags[3].negative == 1 && flags[3].is_star == 1)
		flags[3].count = -1;
	if (flags[3].count != -1 && flags[3].negative == 1 && flags[3].is_star == 0)
	{
		flags[1].count = flags[3].count;
		flags[3].count = 0;
	}
	if (flags[3].count != -1 && flags[3].count < *len)
		*len = flags[3].count;
	while ((flags[0].count - *len) > 0)
	{
		ft_putchar(' ');
		*display += 1;
		flags[0].count--;
	}
}

void		argument_string(int *display, va_list parameters, t_flags flags[4])
{
	int		len;
	char	*str;

	str = va_arg(parameters, char *);
	if (str == NULL)
		len = 6;
	else
		len = ft_strlen(str);
	pre_process(len, display, flags);
	process(flags, &len, display);
	if (str == NULL)
		ft_putnstr("(null)", len);
	else
		ft_putnstr(str, len);
	while (flags[1].count > 0 && flags[1].count > len)
	{
		ft_putchar(' ');
		*display += 1;
		flags[1].count--;
	}
	*display += len;
}
