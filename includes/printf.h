/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 15:25:19 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/13 19:16:13 by agcolas          ###   ########.fr       */
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
	int			space;
	int			count;
	int			negative;
	int			is_star;
}				t_flags;

typedef struct	s_arguments
{
	char		c;
	void		(*function)(int *display, va_list parameters, t_flags flags[4]);
}				t_arguments;

const char		*search_arguments(const char *str, int *display,
				t_flags flags[4], va_list parameters);
void			argument_char(int *display,
				va_list parameters, t_flags flags[4]);
const char		*is_neg(t_flags *flags, const char *str, int len);
const char		*get_number(int len, const char *str,
				t_flags *flags, va_list parameters);
const char		*pass(const char *str,
				t_flags *flags, va_list parameters);
const char		*search_flags_second(const char *str, int *display,
				t_flags flags[4], va_list parameters);
const char		*search_flags(const char *str, int *display,
				t_flags flags[4], va_list parameters);
void			argument_hexa_lower(int *display, va_list parameters,
				t_flags flags[4]);
void			argument_hexa_upper(int *display, va_list parameters,
				t_flags flags[4]);
void			flags_init(t_flags flags[4]);
void			arguments_init(t_arguments arguments[9]);
void			end_argument_int(int *display,
				t_flags flags[4], int nb);
void			argument_int(int *display,
				va_list parameters, t_flags flags[4]);
void			argument_percent(int *display,
				va_list parameters, t_flags flags[4]);
void			argument_pointer(int *display,
				va_list parameters, t_flags flags[4]);
int				ft_printf(const char *str, ...);
void			argument_string(int *display,
				va_list parameters, t_flags flags[4]);
void			argument_unsigned(int *display, va_list parameters,
				t_flags flags[4]);
int				nb_unsi(unsigned long nb);
void			ft_putunbr(int n);
void			middle_process_unsigned(t_flags flags[4], int *save);
void			pre_process_unsigned(t_flags flags[4], int *save);
void			process_int(t_flags flags[4], int len,
				int if_neg, int *display);
int				isflags(char c);

#endif
