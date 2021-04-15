/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 19:37:23 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/25 19:56:08 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if (!(str = (char *)malloc((sizeof(char)) * ((int)len) + 1)))
		return (NULL);
	while (s[i])
	{
		if (i >= (int)start && j < (int)len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
