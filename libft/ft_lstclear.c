/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 21:28:23 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/24 21:35:24 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*new;
	t_list	*list;

	list = *lst;
	while (list)
	{
		new = list;
		list = list->next;
		del(new->content);
		free(new);
	}
	*lst = NULL;
}
