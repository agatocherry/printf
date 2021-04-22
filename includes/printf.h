/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 15:25:19 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/22 15:35:33 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

/*
** delete before push
*/

# include <stdio.h>

/*
** end of to delete
*/

# include "../libft/libft.h"
# include <stdarg.h>

typedef struct	s_flags
{
	char		c;
	int			count;
	int			negative;
	int			is_star;
}				t_flags;

typedef struct	s_arguments
{
	char		c;
	void		(*function)(int *display, va_list parameters, t_flags flags[4]);
}				t_arguments;

/*
** printf.c
*/

int				ft_printf(const char *str, ...);

/*
** init.c
*/

void			flags_init(t_flags flags[4]);
void			arguments_init(t_arguments arguments[9]);

/*
** flags.c
*/

const char		*search_flags(const char *str, int *display,
				t_flags flags[4], va_list parameters);
int				isflags(char c);
const char		*get_number(const char *str, t_flags *flags,
				va_list parameters);

/*
** arguments.c
*/

const char		*search_arguments(const char *str, int *display,
				t_flags flags[4], va_list parameters);
void			argument_percent(int *display, va_list parameters,
				t_flags flags[4]);
void			argument_char(int *display, va_list parameters,
				t_flags flags[4]);
void			argument_string(int *display, va_list parameters,
				t_flags flags[4]);
void			argument_int(int *display, va_list parameters,
				t_flags flags[4]);
void			argument_unsigned(int *display, va_list parameters,
				t_flags flags[4]);

#endif
