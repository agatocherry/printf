/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:02:43 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/13 15:56:41 by agcolas          ###   ########.fr       */
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
	PRINT(" %d\n", PRINT("1 [%c]", 'a'));
	while (c < 410)
	{
		PRINT(" %d\n", PRINT("2 [%c]", c));
		PRINT(" %d\n", PRINT("3 [%5c]", c));
		PRINT(" %d\n", PRINT("4 [%*c]", i, c));
		PRINT(" %d\n", PRINT("5 [%9c]", c));
		PRINT(" %d\n", PRINT("6 [%-15c]", c));
		PRINT(" %d\n", PRINT("7 [%-*c]", i, c));
		PRINT(" %d\n", PRINT("8 [%-9c]", c));
		PRINT(" %d\n", PRINT("9 [%c %c %c]", c, c, c));
		PRINT(" %d\n", PRINT("10 [%200c %-5c %15c]", c, c, c));
		i++;
		c++;
	}
	PRINT(" %d\n", PRINT("11 [%-5]"));
	PRINT(" %d\n", PRINT("11.t [%-5.3]"));
	PRINT(" %d\n", PRINT("12 [%-05]"));
	PRINT(" %d\n", PRINT("13 [%05]"));
	PRINT(" %d\n", PRINT("14 [%5]"));
	PRINT(" %d\n", PRINT("15.t [%.4]"));
	PRINT(" %d\n", PRINT("12.t [%-05.0]"));
	PRINT(" %d\n", PRINT("13.t [%05.4]"));
	PRINT(" %d\n", PRINT("14.t [%5.2]"));
	PRINT(" %d\n", PRINT("15.t [%.1]"));
	PRINT(" %d\n", PRINT("12 [%-05"));
	PRINT(" %d\n", PRINT("13 [%05"));
	PRINT(" %d\n", PRINT("14 [%5"));
	PRINT(" %d\n", PRINT("15 [%"));
	return (0);
}
