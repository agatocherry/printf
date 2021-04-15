/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 19:16:21 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/28 19:40:21 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*newlst;

	if (!lst || !f)
		return (NULL);
	if (!(newlst = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	head = newlst;
	lst = lst->next;
	while (lst)
	{
		if (!(newlst = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&head, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&head, newlst);
	}
	return (head);
}
