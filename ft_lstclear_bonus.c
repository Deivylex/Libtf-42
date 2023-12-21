/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzurita <dzurita@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:16:37 by dzurita           #+#    #+#             */
/*   Updated: 2023/11/09 12:00:26 by dzurita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*last_node;
	t_list	*save_node;

	if (!lst || !del)
		return ;
	last_node = *lst;
	while (last_node != NULL)
	{
		save_node = last_node -> next;
		(del)(last_node -> content);
		free(last_node);
		last_node = save_node;
	}
	*lst = NULL;
}
