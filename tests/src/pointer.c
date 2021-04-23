/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:02:43 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/23 10:39:03 by agcolas          ###   ########.fr       */
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
}