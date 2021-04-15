/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:34:51 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/23 16:15:07 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src < dest)
		while ((int)n > 0)
		{
			((char*)dest)[n - 1] = ((char*)src)[n - 1];
			n--;
		}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
