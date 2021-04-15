/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 18:54:05 by agcolas           #+#    #+#             */
/*   Updated: 2020/09/10 19:37:46 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arrays;

	if (!(arrays = malloc(size * nmemb)))
		return (NULL);
	ft_bzero(arrays, nmemb * size);
	return ((void *)arrays);
}
