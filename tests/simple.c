/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:02:43 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/15 18:59:12 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/printf.h"

int	main(void)
{
	PRINT("Hello World\n");
	PRINT("ABCDEFGHIJKLMNOPQRSTUVWXYZ\n");
	PRINT("abcdefghijklmnopqrstuvwxyz\n");
	PRINT("0123456789\n");
	PRINT("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed enim neque, varius eget venenatis vel, feugiat vel arcu. Nullam accumsan ligula ac consectetur gravida. Proin vitae est quis ligula eleifend ultricies vitae non leo. Donec in nibh eget est quam.\n");
	PRINT("\\n\\v\\x\\\n");
	PRINT("ℌ𝔢𝔩𝔩𝔬 𝔚𝔬𝔯𝔩𝔡\n");
	PRINT("H̵͇̹͒͝e̶̯͓̋̍l̸͕͑̃l̴͇͗̏ǫ̵̍ ̴̧͖͒Ẅ̸̙́o̴̘͕͠r̷̨̳̽͘l̷͇̫̂̉d̵̗͋\n");
	PRINT("H♥e♥l♥l♥o♥ ♥W♥o♥r♥l♥d\n");
	PRINT("[̲̅H][̲̅e][̲̅l][̲̅l][̲̅o] [̲̅W][̲̅o][̲̅r][̲̅l][̲̅d]\n");
	PRINT("b|ɿoW o||ɘH\n");
	PRINT("👩🏼‍💻\n");
	PRINT("NULL\n");
	PRINT("(NULL)\n");
	PRINT("");
	return (0);
}
