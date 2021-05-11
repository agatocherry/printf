/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 15:25:19 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/11 17:41:51 by agcolas          ###   ########.fr       */
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
** utils.c
*/

int				nb_unsi(unsigned long nb);
void			ft_putunbr(int n);
void			pre_process_unsigned(int *len, int *display, t_flags flags[4], int *save);

/*
** flags.c
*/

int				isflags(char c);
char			*search_flags(const char *str, int *display,
				t_flags flags[4], va_list parameters);

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
void			argument_pointer(int *display, va_list parameters,
				t_flags flags[4]);
void			argument_hexa_lower(int *display, va_list parameters,
				t_flags flags[4]);
void			argument_hexa_upper(int *display, va_list parameters,
				t_flags flags[4]);
#endif
