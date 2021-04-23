/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:02:43 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/23 11:30:25 by agcolas          ###   ########.fr       */
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
}