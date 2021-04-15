/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:12:38 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/21 15:58:42 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < (int)n)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
