/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 11:19:25 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/13 18:41:03 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void	process_int(t_flags flags[4], int len, int if_neg, int *display)
{
	while (flags[2].count > len)
	{
		ft_putchar('0');
		*display += 1;
		flags[2].count--;
	}
	if (if_neg == 1 && flags[3].count != -1)
		len -= 1;
	while (flags[3].count > len)
	{
		ft_putchar('0');
		*display += 1;
		flags[3].count--;
	}
}

int		isflags(char c)
{
	if (c == '-' || c == '0' || c == '.')
		return (1);
	return (0);
}
