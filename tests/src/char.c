/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:02:43 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/19 10:22:26 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../includes/printf.h"

int	main(void)
{
	int	c;
	int	i;

	i = -200;
	c = -10;
	PRINT("1 [%c]\n", 'a');
	while (c < 410)
	{
		PRINT("2 [%c]\n", c);
		PRINT("3 [%5c]\n", c);
		PRINT("4 [%*c]\n", i, c);
		PRINT("5 [%9c]\n", c);
		PRINT("6 [%-15c]\n", c);
		PRINT("7 [%-*c]\n", i, c);
		PRINT("8 [%-9c]\n", c);
		PRINT("9 [%c %c %c]\n", c, c, c);
		PRINT("10 [%200c %-5c %15c]\n", c, c, c);
		i++;
		c++;
	}
	return (0);
}
