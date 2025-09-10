/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 04:09:38 by hdelmann          #+#    #+#             */
/*   Updated: 2022/04/08 04:10:01 by hdelmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst1;
	t_list	*lst2;

	if (lst == NULL)
		return ;
	if (*lst == NULL)
		return ;
	lst2 = *lst;
	while (lst2 != NULL)
	{
		lst1 = lst2->next;
		ft_lstdelone(lst2, del);
		lst2 = lst1;
	}
	*lst = NULL;
}
