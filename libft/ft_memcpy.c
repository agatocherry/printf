/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 15:09:46 by agcolas           #+#    #+#             */
/*   Updated: 2020/09/11 15:18:17 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*dest_cpy;
	char	*src_cpy;

	dest_cpy = (char *)dest;
	src_cpy = (char *)src;
	i = 0;
	if (dest_cpy == NULL && src_cpy == NULL)
		return (NULL);
	while (i < (int)n)
	{
		dest_cpy[i] = src_cpy[i];
		i++;
	}
	return (dest_cpy);
}
