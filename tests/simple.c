/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:02:43 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/16 17:06:31 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/printf.h"

int	main(void)
{
	PRINT("1 [Hello World]\n");
	PRINT("2 [ABCDEFGHIJKLMNOPQRSTUVWXYZ]\n");
	PRINT("3 [abcdefghijklmnopqrstuvwxyz]\n");
	PRINT("4 [0133456789]\n");
	PRINT("5 [Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed enim neque, varius eget venenatis vel, feugiat vel arcu. Nullam accumsan ligula ac consectetur gravida. Proin vitae est quis ligula eleifend ultricies vitae non leo. Donec in nibh eget est quam.]\n");
	PRINT("6 [\\n\\v\\x\\]\n");
	PRINT("7 [ℌ𝔢𝔩𝔩𝔬 𝔚𝔬𝔯𝔩𝔡]\n");
	PRINT("8 [H̵͇̹͒͝e̶̯͓̋̍l̸͕͑̃l̴͇͗̏ǫ̵̍ ̴̧͖͒Ẅ̸̙́o̴̘͕͠r̷̨̳̽͘l̷͇̫̂̉d̵̗͋]\n");
	PRINT("9 [H♥e♥l♥l♥o♥ ♥W♥o♥r♥l♥d]\n");
	PRINT("10 [[̲̅H][̲̅e][̲̅l][̲̅l][̲̅o] [̲̅W][̲̅o][̲̅r][̲̅l][̲̅d]]\n");
	PRINT("11 [b|ɿoW o||ɘH]\n");
	PRINT("12 [👩🏼‍💻]\n");
	PRINT("13 [NULL]\n");
	PRINT("14 [(NULL)]\n");
	PRINT("15 [");
	PRINT("");
	PRINT("]");
	return (0);
}
