/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzurita <dzurita@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:38:47 by dzurita           #+#    #+#             */
/*   Updated: 2023/11/13 10:44:12 by dzurita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cmp1;
	unsigned char	*cmp2;

	cmp1 = (unsigned char *)s1;
	cmp2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*cmp1 != *cmp2)
			return (*cmp1 - *cmp2);
		cmp1++;
		cmp2++;
	}
	return (0);
}
