/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:38:53 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/16 18:21:08 by agcolas          ###   ########.fr       */
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

void		arguments_init(t_arguments arguments[9])
{
	arguments[0].c = 'c';
	arguments[0].function = &argument_char;
	arguments[1].c = 's';
	arguments[1].function = &argument_percent;
	arguments[2].c = 'p';
	arguments[2].function = &argument_percent;
	arguments[3].c = 'd';
	arguments[3].function = &argument_percent;
	arguments[4].c = 'i';
	arguments[4].function = &argument_percent;
	arguments[5].c = 'u';
	arguments[5].function = &argument_percent;
	arguments[6].c = 'x';
	arguments[6].function = &argument_percent;
	arguments[7].c = 'X';
	arguments[7].function = &argument_percent;
	arguments[8].c = '%';
	arguments[8].function = &argument_percent;
}
