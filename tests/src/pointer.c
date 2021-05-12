/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:02:43 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/12 16:38:16 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../includes/printf.h"

int	main(void)
{
	int	i;

	i = 255;
	PRINT(" %d\n", PRINT("1 [%p]", (void *)i));
	PRINT(" %d\n", PRINT("2 [%05p]", (void *)i));
	PRINT(" %d\n", PRINT("3 [%.33p]", (void *)i));
	PRINT(" %d\n", PRINT("4 [%02215p]", (void *)i));
	PRINT(" %d\n", PRINT("5 [%.22133p]", (void *)i));
	PRINT(" %d\n", PRINT("6 [%-22p]", (void *)i));
	PRINT(" %d\n", PRINT("7 [%-21112p]", (void *)i));
	PRINT(" %d\n", PRINT("8 [%222p]", (void *)i));
	PRINT(" %d\n", PRINT("9 [%.p]", (void *)i));
	PRINT(" %d\n", PRINT("10 [%p]", (void *)54));
	PRINT(" %d\n", PRINT("11 [%.p]", NULL));
	PRINT(" %d\n", PRINT("12 [%.p]", 0));
	PRINT(" %d\n", PRINT("13 [%.p]", NULL));
	PRINT(" %d\n", PRINT("14 [%1.p]", NULL));
	PRINT(" %d\n", PRINT("15 [%1.p]", NULL));
	PRINT(" %d\n", PRINT("16 [%5.p]", NULL));
	PRINT(" %d\n", PRINT("17 [%5.p]", NULL));
	PRINT(" %d\n", PRINT("18 [-->|%-16.p|<--] ", NULL));
	PRINT(" %d\n", PRINT("19 [-->|%-16.p|<--] ", NULL));
	PRINT(" %d\n", PRINT("20 [%.1p]", (void *)i));
	// PRINT(" %d\n", PRINT("21 [%.p]", &i));
	// PRINT(" %d\n", PRINT("22 [%-p]", &i));
	PRINT(" %d\n", PRINT("23 [%p]", NULL));
	PRINT(" %d\n", PRINT("24 [%p]", NULL));
	PRINT(" %d\n", PRINT("25 [%15p]", NULL));
	PRINT(" %d\n", PRINT("26 [%-15p]", NULL));
	PRINT(" %d\n", PRINT("27 [%*p]", -444, 0));
	PRINT(" %d\n", PRINT("28 [%*p]", -444, NULL));
	PRINT(" %d\n", PRINT("29 [%*p]", -444, i));
	PRINT(" %d\n", PRINT("30 [%*p]", 444, 0));
	PRINT(" %d\n", PRINT("31 [%*p]", 444, NULL));
	PRINT(" %d\n", PRINT("32 [%*p]", 444, i));
	PRINT(" %d\n", PRINT("33 [%108p]", (void*)11721873312409420167lu));
	PRINT(" %d\n", PRINT("33.test [%108p%-175.188i]", (void*)11721873312409420167lu, -653373315));
	PRINT(" %d\n", PRINT("34.a [%-66p]", (void*)9420165689360028937lu));
	PRINT(" %d\n", PRINT("34.b [%-66p%-90c]", (void*)9420165689360028937lu, -29));
	PRINT(" %d\n", PRINT("34.c [%--*.69x]", -122, 174318236u));
	PRINT(" %d\n", PRINT("34.c [%---*.69x]", -122, 174318236u));
	PRINT(" %d\n", PRINT("34.d [%0045.*u]", -127, 2553740548u));
	PRINT(" %d\n", PRINT("34.reel [%-66p%-90c%--*.69x%0045.*u]", (void*)9420165689360028937lu, -29, -122, 174318236u, -127, 2553740548u));
	PRINT(" %d\n", PRINT("35 [%--150.*d%01.172i%--151.122d%--*.110x%--23.182%]", 193, -1523409169, 453642614, 881460015, 68, 2920216226u));
	PRINT(" %d\n", PRINT("36 [%.*p]", -3, 4301272142));
	PRINT(" %d\n", PRINT("37 [%.*p]", -3, 0));
	}