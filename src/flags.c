/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:54:40 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/11 14:37:27 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int			isflags(char c)
{
	if (c == '-' || c == '0' || c == '.')
		return (1);
	return (0);
}

const char	*get_number(const char *str, t_flags *flags, va_list parameters)
{
	int	len;

	len = 0;
	while (str[len] == '-')
		str++;
	if (*str == '*')
	{
		flags->is_star = 1;
		flags->count = (int)va_arg(parameters, int);
		len++;
	}
	else
	{
		while (ft_isdigit(str[len]))
			len++;
		flags->count = ft_atoi(str);
	}
	if (flags->count < 0)
	{
		flags->count *= -1;
		flags->negative = 1;
	}
	return (&str[len]);
}

const char	*search_flags(const char *str, int *display,
			t_flags flags[4], va_list parameters)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	str++;
	flags_init(flags);
	if ((ft_isdigit(*str) || *str == '*') && *str != '0')
		str = get_number(str, &flags[0], parameters);
	while (isflags(*str))
	{
		i = 0;
		while (i < 4)
		{
			if (*str == flags[i].c)
			{
				str = get_number(++str, &flags[i], parameters);
				break ;
			}
			i++;
		}
	}
	search_arguments(str, display, flags, parameters);
	return (str);
}
