/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:58:29 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/13 19:10:06 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

const char	*search_arguments(const char *str, int *display,
			t_flags flags[4], va_list parameters)
{
	t_arguments	arguments[9];
	int			i;

	i = 0;
	arguments_init(arguments);
	while (i < 9)
	{
		if (*str == arguments[i].c)
		{
			arguments[i].function(display, parameters, flags);
			break ;
		}
		i++;
	}
	return (str);
}
