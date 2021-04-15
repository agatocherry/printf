/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:04:46 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/17 17:10:24 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < (int)n)
	{
		str[i] = (char)c;
		i++;
	}
	return (str);
}
