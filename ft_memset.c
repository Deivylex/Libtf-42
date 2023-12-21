/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzurita <dzurita@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:42:59 by dzurita           #+#    #+#             */
/*   Updated: 2023/10/25 12:22:25 by dzurita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *) s + i) = (unsigned char)c;
		i++;
	}
	return (s);
}
