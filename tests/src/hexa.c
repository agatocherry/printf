/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:02:43 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/13 16:12:59 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../includes/printf.h"

int	main(void)
{
	char	c = 'a';
	int		ii = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -9999999;
	char	*n = "abcdefghijklmnop";
	PRINT(" %d\n", PRINT("0 [%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X]", ii, j, k, l, m, n, c, c, j, j, j));
	// Lower
	PRINT(" %d\n", PRINT("1 [%x]", 1));
	PRINT(" %d\n", PRINT("2 [%05x]", 1));
	PRINT(" %d\n", PRINT("3 [%.5x]", 1));
	PRINT(" %d\n", PRINT("4 [%-5x]", 1));
	PRINT(" %d\n", PRINT("5 [%5x]", 1));
	PRINT(" %d\n", PRINT("6 [%x]", 42));
	PRINT(" %d\n", PRINT("7 [%-5x]", 382831));
	PRINT(" %d\n", PRINT("8 [%-5x]", -382831));
	PRINT(" %d\n", PRINT("9 [%-5x]", 2831));
	PRINT(" %d\n", PRINT("10 [%-5x]", 38231));
	PRINT(" %d\n", PRINT("11 [%3x]", 0));
	PRINT(" %d\n", PRINT("12 [%-3x]", 0));
	PRINT(" %d\n", PRINT("13 [%.3x]", 0));
	PRINT(" %d\n", PRINT("14 [%03x]", 0));
	PRINT(" %d\n", PRINT("15 [%8.5x]", 34));
	PRINT(" %d\n", PRINT("16 [%8.5x]", 0));
	PRINT(" %d\n", PRINT("17 [%-8.5x]", 34));
	PRINT(" %d\n", PRINT("18 [%-8.5x]", 0));
	PRINT(" %d\n", PRINT("19 [%08.5x]", 34));
	PRINT(" %d\n", PRINT("20 [%08.5x]", 0));
	PRINT(" %d\n", PRINT("21 [%08.3x]", 8375));
	PRINT(" %d\n", PRINT("22 [%.0x]", 0));
	PRINT(" %d\n", PRINT("23 [%.x]", 0));
	PRINT(" %d\n", PRINT("24 [%5.0x]", 0));
	PRINT(" %d\n", PRINT("25 [%5.x]", 0));
	PRINT(" %d\n", PRINT("26 [%-5.0x]", 0));
	PRINT(" %d\n", PRINT("27 [%-5.x]", 0));
	PRINT(" %d\n", PRINT("28 [%3x]", 0));
	PRINT(" %d\n", PRINT("29 [%-3x]", 0));
	PRINT(" %d\n", PRINT("30 [%.3x]", 0));
	PRINT(" %d\n", PRINT("31 [%03x]", 0));
	PRINT(" %d\n", PRINT("32 [%8.5x]", 34));
	PRINT(" %d\n", PRINT("33 [%8.5x]", 0));
	PRINT(" %d\n", PRINT("34 [%-8.5x]", 34));
	PRINT(" %d\n", PRINT("35 [%-8.5x]", 0));
	PRINT(" %d\n", PRINT("36 [%08.5x]", 34));
	PRINT(" %d\n", PRINT("37 [%08.5x]", 0));
	PRINT(" %d\n", PRINT("38 [%08.3x]", 8375));
	PRINT(" %d\n", PRINT("39 [%.0x]", 0));
	PRINT(" %d\n", PRINT("40 [%.x]", 0));
	PRINT(" %d\n", PRINT("41 [%5.0x]", 0));
	PRINT(" %d\n", PRINT("42 [%5.x]", 0));
	PRINT(" %d\n", PRINT("43 [%-5.0x]", 0));
	PRINT(" %d\n", PRINT("44 [%-5.x]", 0));
	PRINT(" %d\n", PRINT("73 [%-8.3x]", 8375));
	PRINT(" %d\n", PRINT("74 [%-8.3x]", 8375));
	PRINT(" %d\n", PRINT("75 [%-8.3X]", 8375));
	PRINT(" %d\n", PRINT("76 [%20.x]", 0x1234abcdu));
	PRINT(" %d\n", PRINT("77 [%20.0x]", -0x1234abcdu));
	PRINT(" %d\n", PRINT("82 [%5.x]", 0xee));
	PRINT (" %d\n", PRINT("84 [%*.*x]", -444, -444, 0));
	PRINT (" %d\n", PRINT("85 [%0*.*x]", -444, -444, 0));
	PRINT (" %d\n", PRINT("86 [%010.*x]", -444, 0));
	PRINT (" %d\n", PRINT("87 [%5.*x]", -444,  0));
	PRINT (" %d\n", PRINT("88 [%0*x]", -444, 7));
	PRINT (" %d\n", PRINT("89 [%0*.*x]", -444, -444, 7));
	PRINT (" %d\n", PRINT("90 [%*.*x]", -5, -5, 0));
	PRINT (" %d\n", PRINT("91 [%0*.*x]",   -5, -5, 0));
	PRINT (" %d\n", PRINT("92 [%010.*x]", -5, 0));
	PRINT (" %d\n", PRINT("93 [%5.*x]", -5,  0));
	PRINT (" %d\n", PRINT("94 [%0*x]", -5, 7));
	PRINT (" %d\n", PRINT("95 [%0*.*x]",   -5, -5, 7));
	PRINT (" %d\n", PRINT("96 [%*.*x]", 0, 0, 0));
	PRINT (" %d\n", PRINT("97 [%0*.*x]",   0, 0, 0));
	PRINT (" %d\n", PRINT("98 [%010.*x]", 0, 0));
	PRINT (" %d\n", PRINT("99 [%5.*x]", 0,  0));
	PRINT (" %d\n", PRINT("100 [%0*x]", 0, 7));
	PRINT (" %d\n", PRINT("101 [%0*.*x]", 0, 0, 7));
	PRINT (" %d\n", PRINT("102 [%0*.*x]", 5, 10, 7));
	PRINT (" %d\n", PRINT("103 [%0*.*x]", -5, -10, -7));
	PRINT (" %d\n", PRINT("104.test [%x]", -7));
	PRINT (" %d\n", PRINT("104 [%0*.*x]", -5, 10, -7));
	PRINT (" %d\n", PRINT("105 [%0*.*x]", 5, -10, -7));
	PRINT (" %d\n", PRINT("106 [%*.*x]", -5, -10, -7));
	PRINT (" %d\n", PRINT("-102 [%0*.*x]", 5, 10, 7));
	PRINT (" %d\n", PRINT("-103 [%0*.*x]", -5, -10, -7));
	PRINT (" %d\n", PRINT("-104 [%0*.*x]", -5, 10, -7));
	PRINT (" %d\n", PRINT("-105 [%0*.*x]", 5, -10, -7));
	PRINT (" %d\n", PRINT("-106 [%*.*x]", -5, -10, -7));
	// Upper
	PRINT(" %d\n", PRINT("1 [%X]", 1));
	PRINT(" %d\n", PRINT("2 [%05X]", 1));
	PRINT(" %d\n", PRINT("3 [%.5X]", 1));
	PRINT(" %d\n", PRINT("4 [%-5X]", 1));
	PRINT(" %d\n", PRINT("5 [%5X]", 1));
	PRINT(" %d\n", PRINT("6 [%X]", 42));
	PRINT(" %d\n", PRINT("7 [%-5X]", 382831));
	PRINT(" %d\n", PRINT("8 [%-5X]", -382831));
	PRINT(" %d\n", PRINT("9 [%-5X]", 2831));
	PRINT(" %d\n", PRINT("10 [%-5X]", 38231));
	PRINT(" %d\n", PRINT("45 [%3X]", 0));
	PRINT(" %d\n", PRINT("46 [%-3X]", 0));
	PRINT(" %d\n", PRINT("47 [%.3X]", 0));
	PRINT(" %d\n", PRINT("48 [%03X]", 0));
	PRINT(" %d\n", PRINT("49 [%8.5X]", 34));
	PRINT(" %d\n", PRINT("50 [%8.5X]", 0));
	PRINT(" %d\n", PRINT("51 [%-8.5X]", 34));
	PRINT(" %d\n", PRINT("52 [%-8.5X]", 0));
	PRINT(" %d\n", PRINT("53 [%08.5X]", 34));
	PRINT(" %d\n", PRINT("54 [%08.5X]", 0));
	PRINT(" %d\n", PRINT("55 [%08.3X]", 8375));
	PRINT(" %d\n", PRINT("56 [%3X]", 0));
	PRINT(" %d\n", PRINT("57 [%-3X]", 0));
	PRINT(" %d\n", PRINT("58 [%.3X]", 0));
	PRINT(" %d\n", PRINT("59 [%03X]", 0));
	PRINT(" %d\n", PRINT("60 [%8.5X]", 34));
	PRINT(" %d\n", PRINT("61 [%8.5X]", 0));
	PRINT(" %d\n", PRINT("62 [%-8.5X]", 34));
	PRINT(" %d\n", PRINT("63 [%-8.5X]", 0));
	PRINT(" %d\n", PRINT("64 [%08.5X]", 34));
	PRINT(" %d\n", PRINT("65 [%08.5X]", 0));
	PRINT(" %d\n", PRINT("66 [%08.3X]", 8375));
	PRINT(" %d\n", PRINT("67 [%.0X]", 0));
	PRINT(" %d\n", PRINT("68 [%.X]", 0));
	PRINT(" %d\n", PRINT("69 [%5.0X]", 0));
	PRINT(" %d\n", PRINT("70 [%5.X]", 0));
	PRINT(" %d\n", PRINT("71 [%-5.0X]", 0));
	PRINT(" %d\n", PRINT("72 [%-5.X]", 0));
	PRINT(" %d\n", PRINT("78 [%20.X]", 0x1234abcdu));
	PRINT(" %d\n", PRINT("79 [%20.0X]", -0x1234abcdu));
	PRINT(" %d\n", PRINT("80 [%1.x]", 0xee));
	PRINT(" %d\n", PRINT("81 [%1.X]", 0xee));
	PRINT(" %d\n", PRINT("83 [%5.X]", 0xee));
	PRINT (" %d\n", PRINT("-84 [%*.*X]", -444, -444, 0));
	PRINT (" %d\n", PRINT("-85 [%0*.*X]",   -444, -444, 0));
	PRINT (" %d\n", PRINT("-86 [%010.*X]", -444, 0));
	PRINT (" %d\n", PRINT("-87 [%5.*X]", -444,  0));
	PRINT (" %d\n", PRINT("-88 [%0*X]", -444, 7));
	PRINT (" %d\n", PRINT("-89 [%0*.*X]",   -444, -444, 7));
	PRINT (" %d\n", PRINT("-90 [%*.*X]", -5, -5, 0));
	PRINT (" %d\n", PRINT("-91 [%0*.*X]",   -5, -5, 0));
	PRINT (" %d\n", PRINT("-92 [%010.*X]", -5, 0));
	PRINT (" %d\n", PRINT("-93 [%5.*X]", -5,  0));
	PRINT (" %d\n", PRINT("-94 [%0*X]", -5, 7));
	PRINT (" %d\n", PRINT("-95 [%0*.*X]",   -5, -5, 7));
	PRINT (" %d\n", PRINT("-96 [%*.*X]", 0, 0, 0));
	PRINT (" %d\n", PRINT("-97 [%0*.*X]",   0, 0, 0));
	PRINT (" %d\n", PRINT("-98 [%010.*X]", 0, 0));
	PRINT (" %d\n", PRINT("-99 [%5.*X]", 0,  0));
	PRINT (" %d\n", PRINT("-100 [%0*X]", 0, 7));
	PRINT (" %d\n", PRINT("-101 [%0*.*X]",   0, 0, 7));
	int	i;
	int array[] = {-444, -5, 0, -0, 7, 222, 555};
	i = 0;
	while (i < 7)
	{
		PRINT (" %d\n", PRINT("10 [%*x]", array[i], 0));
		PRINT (" %d\n", PRINT("10.test %d [%010.*x]", array[i], array[i], 0));
		PRINT (" %d\n", PRINT("11.test %d [%010.*x]", array[i], array[i], 50));
		PRINT (" %d\n", PRINT("11 [%*x]", array[i], 6));
		PRINT (" %d\n", PRINT("12 [%*x]", array[i], 451));
		PRINT (" %d\n", PRINT("13 [%*x]", array[i], 2000000));
		PRINT (" %d\n", PRINT("13 [%*x]", array[i], 4294967295));
		i++;
	}
	i = 0;
	while (i < 7)
	{
		PRINT (" %d\n", PRINT("10 [%*X]", array[i], 0));
		PRINT (" %d\n", PRINT("10.test %d [%010.*X]", array[i], array[i], 0));
		PRINT (" %d\n", PRINT("11.test %d [%010.*X]", array[i], array[i], 50));
		PRINT (" %d\n", PRINT("11 [%*X]", array[i], 6));
		PRINT (" %d\n", PRINT("12 [%*X]", array[i], 451));
		PRINT (" %d\n", PRINT("13 [%*X]", array[i], 2000000));
		PRINT (" %d\n", PRINT("13 [%*X]", array[i], 4294967295));
		i++;
	}
	PRINT (" %d\n", PRINT("10 [%x]", 10000000000));
	PRINT (" %d\n", PRINT("10 [%X]", 10000000000));
	PRINT (" %d\n", PRINT("444 [%010.*x]", 0, -1));
	PRINT (" %d\n", PRINT("445 [%010.*x]", 0, 6));
	PRINT (" %d\n", PRINT("446 [%010.*x]", 0, 451));
	PRINT (" %d\n", PRINT("447 [%010.*x]", 0, 2000000));
	PRINT (" %d\n", PRINT("448 [%*.x]", -5, 0));
	PRINT (" %d\n", PRINT("449 [%*.0x]", -5, 0));
	PRINT (" %d\n", PRINT("450 [%*.x]", -444, 0));
	PRINT (" %d\n", PRINT("451 [%*.0x]", -444, 0));
	PRINT (" %d\n", PRINT("451 [%*.0x]", -444, 6));
	PRINT (" %d\n", PRINT("-444 [%010.*X]", 0, -1));
	PRINT (" %d\n", PRINT("-445 [%010.*X]", 0, 6));
	PRINT (" %d\n", PRINT("-446 [%010.*X]", 0, 451));
	PRINT (" %d\n", PRINT("-447 [%010.*X]", 0, 2000000));
	PRINT (" %d\n", PRINT("-448 [%*.X]", -5, 0));
	PRINT (" %d\n", PRINT("-449 [%*.0X]", -5, 0));
	PRINT (" %d\n", PRINT("-450 [%*.X]", -444, 0));
	PRINT (" %d\n", PRINT("-451 [%*.0X]", -444, 0));
	PRINT (" %d\n", PRINT("-451 [%*.0X]", -444, 6));
	PRINT (" %d\n", PRINT("1000 [%0*.*x]", 2, -1, 8));
	PRINT (" %d\n", PRINT("1001 [%0*.*x]", 1, -4, 8));
	PRINT (" %d\n", PRINT("1002 [%0*.x]", -1, 8));
	PRINT (" %d\n", PRINT("1003 [%0*.x]", -2, 8));
	PRINT (" %d\n", PRINT("1004 [%04.x]", 8));
	PRINT (" %d\n", PRINT("1004 [%042.x]", 8));
	PRINT (" %d\n", PRINT("1004 [%04.x]", 22218));
	PRINT (" %d\n", PRINT("1005 [%01.x]", 0));
	PRINT (" %d\n", PRINT("1007 [%0*.x]", 2, 0));
	PRINT (" %d\n", PRINT("1008 [%0*.*x]", 4, 0, 12));
	PRINT (" %d\n", PRINT("1006 [%0*.x]", 2, 1));
	PRINT (" %d\n", PRINT("1009 [%0*.x]", 1, 12));
	PRINT (" %d\n", PRINT("111 [%0*.*x]", -4, -3, 12));
	PRINT (" %d\n", PRINT("112 [%0*.*x]", -4, 0, 12));
	PRINT (" %d\n", PRINT("113 [%0*.*x]", -3, 0, 12));
	PRINT (" %d\n", PRINT("114 [%*.*x]", -4, -3, 0));
	PRINT (" %d\n", PRINT("114 [%-4.2x]", 12));
	PRINT (" %d\n", PRINT("115 [%-4.*x]", 3, 12));
	PRINT (" %d\n", PRINT("116 [%-4.*x]", 4, 12));
	PRINT (" %d\n", PRINT("117 [%*.*x]", -4, 0, 12));
}