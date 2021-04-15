/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 20:48:43 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/24 21:42:55 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *search, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (search[0] == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == search[j] && i + j < len)
		{
			if (search[j + 1] == '\0')
				return ((char*)&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
