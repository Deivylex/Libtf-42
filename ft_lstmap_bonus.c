/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzurita <dzurita@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:40:08 by dzurita           #+#    #+#             */
/*   Updated: 2023/11/09 17:27:46 by dzurita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*temp;

	if (!f || !lst)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		temp = f(lst -> content);
		new_node = ft_lstnew(temp);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			del(temp);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst -> next;
	}
	return (new_list);
}
