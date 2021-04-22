/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:02:43 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/22 15:23:43 by agcolas          ###   ########.fr       */
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
	return (0);
}
