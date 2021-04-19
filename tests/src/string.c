/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:02:43 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/19 18:37:59 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../includes/printf.h"

int	main(void)
{
	char	*str = "Hello World !";
	int	i;

	i = -10;
	PRINT("1 [%s]\n", str);
	PRINT("2 [%.s]\n", str);
	PRINT("3 [%-6.s]\n", str);
	PRINT("4 [%6.s]\n", str);
	PRINT("5 [%.5s]\n", str);
	PRINT("6 [%.55s]\n", str);
	PRINT("7 [%-4.55s]\n", str);
	PRINT("8 [%-55.55s]\n", str);
	PRINT("9 [%55.55s]\n", str);
	while (i < 10)
	{
		PRINT("10 [%*s]\n", i, str);
		PRINT("11 [%-*s]\n", i, str);
		PRINT("12 [%*.*s]\n", i, i, str);
		PRINT("13 [%-*.*s]\n", i, i, str);
		i++;
	}
	return (0);
}
