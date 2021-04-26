/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:02:43 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/26 12:39:51 by agcolas          ###   ########.fr       */
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
	PRINT(" %d\n", PRINT("8 [%22p]", (void *)i));
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
}