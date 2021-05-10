/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:02:43 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/10 11:51:03 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../includes/printf.h"


int	main(void)
{
	int	i;

	i = -250;
	PRINT(" %d\n", PRINT("1 [%u]", 1));
	PRINT(" %d\n", PRINT("2 [%u]", 10));
	PRINT(" %d\n", PRINT("3 [%u]", 10000));
	PRINT(" %d\n", PRINT("4 [%u]", 4294967295));
	PRINT(" %d\n", PRINT("5 [%u]", -4294967295));
	PRINT(" %d\n", PRINT("6 [%u]", -1));
	while (i < 350)
	{
		PRINT(" %d\n", PRINT("7 [%0u]", i));;;
		PRINT(" %d\n", PRINT("8 [%*u]", i, i));
		PRINT(" %d\n", PRINT("9 [%-*u]", i, i));
		i++;
	}
	PRINT(" %d\n", PRINT("10 [%3u]", 0));
	PRINT(" %d\n", PRINT("11 [%-3u]", 0));
	PRINT(" %d\n", PRINT("12 [%.3u]", 0));
	PRINT(" %d\n", PRINT("13 [%03u]", 0));
	PRINT(" %d\n", PRINT("14 [%8.5u]", 34));
	PRINT(" %d\n", PRINT("15 [%8.5u]", 0));
	PRINT(" %d\n", PRINT("16 [%-8.5u]", 34));
	PRINT(" %d\n", PRINT("17 [%-8.5u]", 0));
	PRINT(" %d\n", PRINT("18 [%08.12u]", 34));
	PRINT(" %d\n", PRINT("19 [%08.15u]", 0));
	PRINT(" %d\n", PRINT("20 [%08.3u]", 8375));
	PRINT(" %d\n", PRINT("21 [%.0u]", 0));
	PRINT(" %d\n", PRINT("22 [%.u]", 0));
	PRINT(" %d\n", PRINT("23 [%5.0u]", 0));
	PRINT(" %d\n", PRINT("24 [%5.u]", 0));
	PRINT(" %d\n", PRINT("25 [%-5.0u]", 0));
	PRINT(" %d\n", PRINT("26 [%-5.u]", 0));
	PRINT(" %d\n", PRINT("27 [%5.u]", 1));
	PRINT(" %d\n", PRINT("28 [%1.u]", 1));
	PRINT(" %d\n", PRINT("29 [%20.u]", 1024u));
	PRINT(" %d\n", PRINT("30 [%20.0u]", -1024u));
	PRINT(" %d\n", PRINT("31 [%-8.3u]", 8375));
	PRINT(" %d\n", PRINT("32 [%20.u]", 1024u));
	PRINT(" %d\n", PRINT("33 [%20.0u]", -1024u));
	PRINT (" %d\n", PRINT("34 [%*.*u]", -444, -444, 0));
	PRINT (" %d\n", PRINT("35 [%0*.*u]",   -444, -444, 0));
	PRINT (" %d\n", PRINT("36 [%010.*u]", -444, 0));
	PRINT (" %d\n", PRINT("37 [%5.*u]", -444,  0));
	PRINT (" %d\n", PRINT("38 [%0*u]", -444, 7));
	PRINT (" %d\n", PRINT("39 [%0*.*u]",   -444, -444, 7));
	PRINT (" %d\n", PRINT("40 [%*.*u]", -5, -5, 0));
	PRINT (" %d\n", PRINT("41 [%0*.*u]", -5, -5, 0));
	PRINT (" %d\n", PRINT("42 [%010.*u]", -5, 0));
	PRINT (" %d\n", PRINT("43 [%5.*u]", -5,  0));
	PRINT (" %d\n", PRINT("44 [%0*u]", -5, 7));
	PRINT (" %d\n", PRINT("45 [%0*.*u]",   -5, -5, 7));
	PRINT (" %d\n", PRINT("46 [%*.*u]", 0, 0, 0));
	PRINT (" %d\n", PRINT("47 [%0*.*u]",   0, 0, 0));
	PRINT (" %d\n", PRINT("48 [%010.*u]", 0, 0));
	PRINT (" %d\n", PRINT("49 [%5.*u]", 0,  0));
	PRINT (" %d\n", PRINT("50 [%0*u]", 0, 7));
	PRINT (" %d\n", PRINT("51 [%0*.*u]",   0, 0, 7));
	PRINT (" %d\n", PRINT("11 [%*.u]", -5, 0));
	PRINT (" %d\n", PRINT("12 [%*.0u]", -5, 0));
	PRINT (" %d\n", PRINT("11 [%*.u]", -444, 0));
	PRINT (" %d\n", PRINT("12 [%*.0u]", -444, 0));
	PRINT (" %d\n", PRINT ("13 [%*.*u]", -444, -444, 4294967295));
	PRINT (" %d\n", PRINT ("14 [%*.*u]", -444, -5, 4294967295));
	PRINT (" %d\n", PRINT ("15 [%*.*u]", -444, 0, 4294967295));
	PRINT (" %d\n", PRINT ("16 [%*.*u]", -444, -0, 4294967295));
	PRINT (" %d\n", PRINT ("17 [%*.*u]", -444, 7, 4294967295));
	PRINT (" %d\n", PRINT ("18 [%*.*u]", -444, 222, 4294967295));
	PRINT (" %d\n", PRINT ("19 [%*.*u]", -444, 555, 4294967295));
	return (0);
}
