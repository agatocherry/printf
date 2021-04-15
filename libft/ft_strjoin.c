/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 17:12:14 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/28 18:38:32 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		size;

	if (!s1)
		return (NULL);
	size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	if (!(dest = (char *)malloc((sizeof(char) * size) + 1)))
		return (NULL);
	ft_strcpy(dest, s1);
	ft_strcpy(&dest[ft_strlen(s1)], s2);
	return (dest);
}
