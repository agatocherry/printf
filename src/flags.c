/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:54:40 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/13 18:25:43 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

const char		*is_neg(t_flags *flags, const char *str, int len)
{
	if (flags->count < 0)
	{
		flags->count *= -1;
		flags->negative = 1;
	}
	while (len > 0)
	{
		str++;
		len--;
	}
	return (str);
}

const char		*get_number(int len, const char *str,
				t_flags *flags, va_list parameters)
{
	int	is_dash;

	is_dash = 0;
	while (str[len] == '-')
	{
		is_dash++;
		len++;
	}
	if (str[len] == '*')
	{
		flags->is_star = 1;
		flags->count = (int)va_arg(parameters, int);
		len++;
	}
	else
	{
		if (is_dash != 0)
			len -= is_dash;
		while (ft_isdigit(str[len]))
			len++;
		flags->count = ft_atoi(str);
	}
	return (is_neg(flags, str, len));
}

const char		*pass(int *display, const char *str,
				t_flags *flags, va_list parameters)
{
	int	len;

	len = 0;
	while (str[len] == '0')
		len++;
	while (str[len] == ' ')
	{
		flags->space = 1;
		len++;
	}
	str = get_number(len, str, flags, parameters);
	return (str);
}

const char		*search_flags_second(const char *str, int *display,
				t_flags flags[4], va_list parameters)
{
	int	i;

	i = 0;
	while (isflags(*str))
	{
		i = 0;
		while (i < 4)
		{
			if (*str == flags[i].c)
			{
				str = pass(display, ++str, &flags[i], parameters);
				break ;
			}
			i++;
		}
	}
	search_arguments(str, display, flags, parameters);
	return (str);
}

const char		*search_flags(const char *str, int *display,
				t_flags flags[4], va_list parameters)
{
	str++;
	flags_init(flags);
	while (*str == ' ')
	{
		flags[0].space = 1;
		str++;
	}
	if ((ft_isdigit(*str) || *str == '*') && *str != '0')
		str = pass(display, str, &flags[0], parameters);
	str = search_flags_second(str, display, flags, parameters);
	return (str);
}
