/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzurita <dzurita@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:47:22 by dzurita           #+#    #+#             */
/*   Updated: 2023/10/24 15:10:56 by dzurita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	l;
	size_t	i;

	l = 0;
	while (l < size && dst[l])
		l++;
	if (l == size)
		return (l + ft_strlen(src));
	i = 0;
	while (l < (size - 1) && src[i])
	{
		dst[l] = src[i];
		l++;
		i++;
	}
	dst[l] = 0;
	while (src[i])
	{
		i++;
		l++;
	}
	return (l);
}
