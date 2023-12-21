/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzurita <dzurita@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:19:21 by dzurita           #+#    #+#             */
/*   Updated: 2023/11/09 10:44:26 by dzurita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cont_node;
	t_list	*node;

	cont_node = 0;
	node = lst;
	while (node != NULL)
	{
		cont_node++;
		node = node -> next;
	}
	return (cont_node);
}
