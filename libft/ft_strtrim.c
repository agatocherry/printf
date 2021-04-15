/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 20:01:45 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/25 21:37:03 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_searchtrim(char search, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (search == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	int		i;
	char	*newstr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	i = len;
	while (len && ft_searchtrim(s1[--i], set) == 1)
		len--;
	while (len && ft_searchtrim(s1[0], set) == 1)
	{
		len--;
		s1++;
	}
	if (!(newstr = ft_substr(s1, 0, len)))
		return (NULL);
	return (newstr);
}
