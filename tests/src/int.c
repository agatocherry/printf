/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:02:43 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/27 15:04:08 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../includes/printf.h"

static void	d()
{
	int	i;

	i = -2000;
	PRINT(" %d\n", PRINT("1 [%d]", 1));
	PRINT(" %d\n", PRINT("2 [%d]", -2147483648));
	PRINT(" %d\n", PRINT("3 [%d]", 2147483647));
	PRINT(" %d\n", PRINT("4 [%d]", 2147483648));
	PRINT(" %d\n", PRINT("5 [%d]", -2147483649));
	PRINT(" %d\n", PRINT("6 [%d]", 2147483666));
	PRINT(" %d\n", PRINT("7 [%d]", -2147483666));
	while (i < 5000)
	{
		PRINT(" %d\n", PRINT("8 [%d]", i));
		i++;
	}
	PRINT(" %d\n", PRINT("9 [%d]", 0));
	PRINT(" %d\n", PRINT("10 [%0d]", 150));
	PRINT(" %d\n", PRINT("11 [%0d]", -150));
	PRINT(" %d\n", PRINT("12 [%05d]", 150));
	PRINT(" %d\n", PRINT("13 [%05d5]", -150));
	PRINT(" %d\n", PRINT("14 [%.d]", 150));
	PRINT(" %d\n", PRINT("15 [%.d]", -150));
	PRINT(" %d\n", PRINT("16 [%.3d]", 150));
	PRINT(" %d\n", PRINT("17 [%.d]", -150));
	PRINT(" %d\n", PRINT("18 [%.10d]", -150));
	PRINT(" %d\n", PRINT("19 [%-10d]", -150));
	PRINT(" %d\n", PRINT("20 [%-d]", -150));
	PRINT(" %d\n", PRINT("21 [%10d]", -150));
	PRINT(" %d\n", PRINT("22 [%-10d]", 150));
	PRINT(" %d\n", PRINT("23 [%-d]", 150));
	PRINT(" %d\n", PRINT("24 [%10d]", 150));
	PRINT(" %d\n", PRINT("25 [%3d]", 0));
	PRINT(" %d\n", PRINT("26 [%-3d]", 0));
	PRINT(" %d\n", PRINT("27 [%.3d]", 0));
	PRINT(" %d\n", PRINT("28 [%03d]", 0));
	PRINT(" %d\n", PRINT("29 [%8.5d]", 34));
	PRINT(" %d\n", PRINT("30 [%10.5d]", -216));
	PRINT(" %d\n", PRINT("31 [%8.5d]", 0));
	PRINT(" %d\n", PRINT("32 [%-8.5d]", 34));
	PRINT(" %d\n", PRINT("33 [%-10.5d]", -216));
	PRINT(" %d\n", PRINT("34 [%-8.5d]", 0));
	PRINT(" %d\n", PRINT("35 [%08.5d]", 34));
	PRINT(" %d\n", PRINT("36 [%010.5d]", -216));
	PRINT(" %d\n", PRINT("37 [%08.5d]", 0));
	PRINT(" %d\n", PRINT("38 [%08.3d]", 8375));
	PRINT(" %d\n", PRINT("39 [%08.3d]", -8473));
	PRINT(" %d\n", PRINT("40 [%.0d]", 0));
	PRINT(" %d\n", PRINT("41 [%.d]", 0));
	PRINT(" %d\n", PRINT("42 [%5.0d]", 0));
	PRINT(" %d\n", PRINT("43 [%5.d]", 0));
	PRINT(" %d\n", PRINT("44 [%-5.0d]", 0));
	PRINT(" %d\n", PRINT("45 [%-5.d]", 0));
}

static void	i()
{
	int	i;

	i = -2000;
	PRINT(" %i\n", PRINT("1 [%i]", 1));
	PRINT(" %i\n", PRINT("2 [%i]", -2147483648));
	PRINT(" %i\n", PRINT("3 [%i]", 2147483647));
	PRINT(" %i\n", PRINT("4 [%i]", 2147483648));
	PRINT(" %i\n", PRINT("5 [%i]", -2147483649));
	PRINT(" %i\n", PRINT("6 [%i]", 2147483666));
	PRINT(" %i\n", PRINT("7 [%i]", -2147483666));
	while (i < 5000)
	{
		PRINT(" %i\n", PRINT("8 [%i]", i));
		i++;
	}
	PRINT(" %i\n", PRINT("9 [%i]", 0));
	PRINT(" %i\n", PRINT("10 [%0i]", 150));
	PRINT(" %i\n", PRINT("11 [%0i]", -150));
	PRINT(" %i\n", PRINT("12 [%05i]", 150));
	PRINT(" %i\n", PRINT("13 [%05i5]", -150));
	PRINT(" %i\n", PRINT("14 [%.i]", 150));
	PRINT(" %i\n", PRINT("15 [%.i]", -150));
	PRINT(" %i\n", PRINT("16 [%.3i]", 150));
	PRINT(" %i\n", PRINT("17 [%.i]", -150));
	PRINT(" %i\n", PRINT("18 [%.10i]", -150));
	PRINT(" %i\n", PRINT("19 [%-10i]", -150));
	PRINT(" %i\n", PRINT("20 [%-i]", -150));
	PRINT(" %i\n", PRINT("21 [%10i]", -150));
	PRINT(" %i\n", PRINT("22 [%-10i]", 150));
	PRINT(" %i\n", PRINT("23 [%-i]", 150));
	PRINT(" %i\n", PRINT("24 [%10i]", 150));
	PRINT(" %i\n", PRINT("25 [%3i]", 0));
	PRINT(" %i\n", PRINT("26 [%-3i]", 0));
	PRINT(" %i\n", PRINT("27 [%.3i]", 0));
	PRINT(" %i\n", PRINT("28 [%03i]", 0));
	PRINT(" %i\n", PRINT("29 [%8.5i]", 34));
	PRINT(" %i\n", PRINT("30 [%10.5i]", -216));
	PRINT(" %i\n", PRINT("31 [%-8.5i]", 0));
	PRINT(" %i\n", PRINT("32 [%8.5i]", 34));
	PRINT(" %i\n", PRINT("33 [%010.5i]", -216));
	PRINT(" %i\n", PRINT("34 [%08.5i]", 0));
	PRINT(" %i\n", PRINT("35 [%08.3i]", 8375));
	PRINT(" %i\n", PRINT("36 [%08.3i]", -8373));
	PRINT(" %i\n", PRINT("37 [%.0i]", 0));
	PRINT(" %i\n", PRINT("38 [%.i]", 0));
	PRINT(" %i\n", PRINT("39 [%5.0i]", 0));
	PRINT(" %i\n", PRINT("40 [%5.i]", 0));
	PRINT(" %i\n", PRINT("41 [%-5.0i]", 0));
	PRINT(" %i\n", PRINT("42 [%-5.i]", 0));
}

int	main(void)
{
	d();
	i();
	return (0);
}
