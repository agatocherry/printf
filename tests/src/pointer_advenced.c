#include <stdio.h>
#include "../../includes/printf.h"

int	main(void)
{
	static int ncm_p = 5;
	ft_printf("ft_printf %d\n", ft_printf("1 [%p]", &ncm_p));
	printf("printf %d\n", printf("1 [%p]", &ncm_p));
	ft_printf("ft_printf %d\n", ft_printf("2 [%.p]", &ncm_p));
	printf("printf %d\n", printf("2 [%.p]", &ncm_p));
	ft_printf("ft_printf %d\n", ft_printf("3 [%-p]", &ncm_p));
	printf("printf %d\n", printf("3 [%-p]", &ncm_p));
	ft_printf("ft_printf %d\n", ft_printf("Hexa [%x]", 10000000000));
	printf("printf %d\n", printf("Hexa [%x]", 10000000000));
}