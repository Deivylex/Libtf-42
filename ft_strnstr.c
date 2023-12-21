/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzurita <dzurita@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:19:28 by dzurita           #+#    #+#             */
/*   Updated: 2023/10/30 10:27:25 by dzurita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	if ((!s1 || !s2) && len == 0)
		return (NULL);
	if (s2 == s1 || !s2[0])
		return ((char *)s1);
	while (*s1 && len > 0)
	{
		if (*s1 == *s2)
		{
			i = 0;
			while (i < len && s1[i] == s2[i] && s2[i])
				i++;
			if (s2[i] == '\0')
			{
				return ((char *)s1);
			}
		}
		s1++;
		len--;
	}
	return (NULL);
}
