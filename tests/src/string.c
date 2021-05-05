/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:02:43 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/05 15:19:01 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../includes/printf.h"

int	main(void)
{
	char	*str = "Hello World !";
	int	i;

	i = -10;
	PRINT(" %d\n", PRINT("1 [%s]", str));
	PRINT(" %d\n", PRINT("2 [%.s]", str));
	PRINT(" %d\n", PRINT("3 [%-6.s]", str));
	PRINT(" %d\n", PRINT("4 [%6.s]", str));
	PRINT(" %d\n", PRINT("5 [%.5s]", str));
	PRINT(" %d\n", PRINT("6 [%.55s]", str));
	PRINT(" %d\n", PRINT("7 [%-4.55s]", str));
	PRINT(" %d\n", PRINT("8 [%-55.55s]", str));
	PRINT(" %d\n", PRINT("9 [%55.55s]", str));
	while (i < 10)
	{
		PRINT(" %d\n", PRINT("10 [%*s]", i, str));
		PRINT(" %d\n", PRINT("11 [%-*s]", i, str));
		PRINT(" %d\n", PRINT("12 [%*.*s]", i, i, str));
		PRINT(" %d\n", PRINT("13 [%-*.*s]", i, i, str));
		i++;
	}
	PRINT(" %d\n", PRINT("14 [%-4.-5s]", str));
	PRINT(" %d\n", PRINT("15 [%.-5s]", str));
	PRINT(" %d\n", PRINT("16 [%-488.-545s]", str));
	PRINT(" %d\n", PRINT("17 [%.-545s]", str));
	PRINT(" %d\n", PRINT("18 [%s]", str));
	PRINT(" %d\n", PRINT("19 [%s]", "♥\0\127\09\07\08\122"));
	PRINT(" %d\n", PRINT("20 [%s]", ""));
	PRINT(" %d\n", PRINT("21 [%s]", "\0"));
	PRINT(" %d\n", PRINT("22 [%s]", "NULL"));
	PRINT(" %d\n", PRINT("23 [%s]", "(NULL)"));
	PRINT(" %d\n", PRINT("24 [%s]", NULL));
	PRINT(" %d\n", PRINT("25 [%-5s]", NULL));
	PRINT(" %d\n", PRINT("26 [%s]", 0));
	PRINT(" %d\n", PRINT("27 [neg1 %*s]", -9, "coucou"));
	PRINT(" %d\n", PRINT("28 [neg2 %*.*s]", -9, 4, "coucou"));
	PRINT(" %d\n", PRINT("29 [neg3 %*s]", -9, NULL));
	PRINT(" %d\n", PRINT("30 [neg5 %*s]", -100, "coucou"));
	PRINT(" %d\n", PRINT("31 [neg6 %*s]", -156, "coucou"));
	PRINT(" %d\n", PRINT("32 [neg7 %*.*s]", -1586, 15, "coucou"));
	PRINT(" %d\n", PRINT("33 [neg8 %*.*s]", -1586, 15, "coucou"));
	PRINT(" %d\n", PRINT("34 [neg10 %*.*s]", -15586, 15, "coucou"));
	PRINT(" %d\n", PRINT("35 [neg11 %*.*s]", -15586, 15, "coucou"));
	PRINT(" %d\n", PRINT("36 [%*s]", -444, "aloa"));
	PRINT(" %d\n", PRINT("37 [%*s]", -5, "aloa"));
	PRINT(" %d\n", PRINT("38 [%*.*s]", -444, -444, "aloa"));
	PRINT(" %d\n", PRINT("39 [%*.*s]", -5, -10, "sd"));
	return (0);
}
