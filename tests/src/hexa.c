/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:02:43 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/26 11:53:50 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../includes/printf.h"

int	main(void)
{
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
}