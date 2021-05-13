#include <stdio.h>
#include "includes/printf.h"

int	main(void)
{
	printf("printf %d\n", printf("%05"));
	ft_printf("ft_printf %d\n", ft_printf("%05"));
	printf("printf %d\n", printf("sudisiosa %05"));
	printf("printf %d\n", printf("sudisiosa %05"));
	return(0);
}