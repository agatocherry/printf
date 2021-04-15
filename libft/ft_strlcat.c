/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:01:31 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/29 22:14:12 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t count)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	strlen_src;

	strlen_src = ft_strlen(src);
	if (count == 0)
		return (strlen_src);
	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < count)
		i++;
	k = i;
	if (i < count)
	{
		while (i < count - 1 && src[j] != '\0')
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	if (count - 1 < k)
		return (count + strlen_src);
	return (strlen_src + k);
}
