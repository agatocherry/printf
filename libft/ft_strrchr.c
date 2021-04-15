/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:52:15 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/25 18:58:56 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	int		occu;
	int		size;

	str = (char *)s;
	size = ft_strlen(str);
	i = 0;
	occu = -1;
	while (i <= size)
	{
		if (str[i] == (char)c)
			occu = i;
		i++;
	}
	if (occu != -1)
		return (&str[occu]);
	return (NULL);
}
