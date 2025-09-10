/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 03:55:53 by hdelmann          #+#    #+#             */
/*   Updated: 2022/11/09 12:35:29 by hdelmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst1;
	t_list	*lst2;

	if (lst == NULL || !f || !del)
		return (0);
	lst1 = ft_lstnew(f(lst->content));
	if (!lst1)
		return (0);
	lst = lst->next;
	lst2 = lst1;
	while (lst != NULL)
	{
		if (!lst1)
		{
			ft_lstclear(&lst2, del);
			return (0);
		}
		lst1->next = ft_lstnew(f(lst->content));
		lst1 = lst1->next;
		lst = lst->next;
	}
	return (lst2);
}
