/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 20:09:14 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/24 20:47:07 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	int		size;

	str = (char *)s;
	size = ft_strlen(str);
	i = 0;
	while (i <= size)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
