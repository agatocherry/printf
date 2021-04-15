/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:38:53 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/15 19:04:03 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void		flags_init(t_flags flags[4])
{
	flags[0].c = ' ';
	flags[0].count = -1;
	flags[0].negative = 0;
	flags[1].c = '-';
	flags[1].count = -1;
	flags[2].c = '0';
	flags[2].count = -1;
	flags[2].negative = 0;
	flags[3].c = '.';
	flags[3].count = -1;
}

void		arguments_init(t_arguments arguments[4], t_flags flags[2])
{
	arguments[0].c = 'c';
	arguments[1].c = 's';
	arguments[2].c = '%';
}
