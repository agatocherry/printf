/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:02:43 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/22 16:09:24 by agcolas          ###   ########.fr       */
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
	return (0);
}
