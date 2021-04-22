/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:02:43 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/22 15:20:57 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../includes/printf.h"

int	main(void)
{
	int	i;

	i = -100;
	PRINT(" %d\n", PRINT("1 [%%]"));
	PRINT(" %d\n", PRINT("2 [%05%]"));
	while (i < 100)
	{
		PRINT(" %d\n", PRINT("4 [%0*%]", i));
		i++;
	}
	PRINT(" %d\n", PRINT("5 [%0%]"));
	PRINT(" %d\n", PRINT("6 [%-5%]"));
	i = -100;
	while (i < 100)
	{
		PRINT(" %d\n", PRINT("7 [%-*%]", i));
		i++;
	}
	PRINT(" %d\n", PRINT("8 [%-%]"));
	PRINT(" %d\n", PRINT("9 [%.3%]"));
	i = -100;
	while (i < 100)
	{
		PRINT(" %d\n", PRINT("10 [%.*%]", i));
		i++;
	}
	PRINT(" %d\n", PRINT("11 [%.%]"));
	PRINT(" %d\n", PRINT("12 [%.0%]"));
	PRINT(" %d\n", PRINT("13 [%-05%]"));
	PRINT(" %d\n", PRINT("14 [%-055%]"));
	PRINT(" %d\n", PRINT("15 [%0-5%]"));
	PRINT(" %d\n", PRINT("16 [%0-55%]"));
	PRINT(" %d\n", PRINT("17 [%0.5%]"));
	PRINT(" %d\n", PRINT("18 [%0.55%]"));
	PRINT(" %d\n", PRINT("19 [%0*.*%]", -5, -10));
	PRINT(" %d\n", PRINT("20 [%*.*%]", -5, -10));
	PRINT(" %d\n", PRINT("21 [%0*.*%]", 5, 10));
	PRINT(" %d\n", PRINT("22 [%*.*%]", 5, 10));
	PRINT(" %d\n", PRINT("23 [%10.%]"));
	PRINT(" %d\n", PRINT("24 [%.1%]"));
	PRINT(" %d\n", PRINT("25 [%1%]"));
	PRINT(" %d\n", PRINT("26 [%.5%]"));
	PRINT(" %d\n", PRINT("27 [%%%%%%]"));
	PRINT(" %d\n", PRINT("28 [%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%]"));
	PRINT(" %d\n", PRINT("29 [%-999999%]"));
	PRINT(" %d\n", PRINT("30 [%0999999%]"));
	return (0);
}
