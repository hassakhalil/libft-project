/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhalil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:22:43 by hkhalil           #+#    #+#             */
/*   Updated: 2021/11/08 16:25:33 by hkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;
	t_list	*ptrlst;

	if (!lst)
		return (0);
	ptrlst = lst;
	head = ft_lstnew(f(lst->content));
	ptrlst = ptrlst->next;
	while (ptrlst)
	{
		new = ft_lstnew(f(ptrlst->content));
		if (!new)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&head, new);
		ptrlst = ptrlst->next;
	}
	return (head);
}
