/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzurita <dzurita@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:50:25 by dzurita           #+#    #+#             */
/*   Updated: 2023/11/13 10:25:16 by dzurita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	maxnum;

	maxnum = 0 - 1;
	if (nmemb != 0)
	{
		if (maxnum / nmemb < size)
			return (NULL);
	}
	ptr = (void *) malloc (nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero (ptr, (nmemb * size));
	return (ptr);
}
