/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:02:43 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/22 15:10:06 by agcolas          ###   ########.fr       */
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
}

int	main(void)
{
	d();
	i();
	return (0);
}
