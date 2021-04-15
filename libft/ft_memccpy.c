/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:13:15 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/11 15:45:00 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int				i;
	char			*dest_cpy;
	unsigned char	*src_cpy;

	dest_cpy = (char *)dest;
	src_cpy = (unsigned char *)src;
	i = 0;
	while (i < (int)n)
	{
		dest_cpy[i] = src_cpy[i];
		if (src_cpy[i] == (unsigned char)c)
			return (dest_cpy + i + 1);
		i++;
	}
	return (NULL);
}
