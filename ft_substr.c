/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzurita <dzurita@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:22:13 by dzurita           #+#    #+#             */
/*   Updated: 2023/10/31 11:31:11 by dzurita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dup;
	size_t	total;

	if (!s || start > ft_strlen (s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		total = ft_strlen (s + start);
	else
		total = len;
	dup = (char *)malloc(sizeof(*s) * (total + 1));
	if (dup == NULL)
		return (NULL);
	ft_strlcpy(dup, s + start, total + 1);
	return (dup);
}
