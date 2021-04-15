/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:58:29 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/15 18:02:00 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

const char	*search_arguments(const char *str, int *display,
			t_flags flags[4], va_list parameters)
{
	t_arguments	arguments[4];
	int			i;
	int			len;
	void		*content;

	i = 0;;
	arguments_init(arguments, flags);
	while (i < 4)
	{
		if (*str == arguments[i].c)
		{
			printf("Youhou");
			break ;
		}
		i++;
	}
	return (str);
}
