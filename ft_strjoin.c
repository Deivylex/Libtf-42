/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzurita <dzurita@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:32:59 by dzurita           #+#    #+#             */
/*   Updated: 2023/11/01 10:56:06 by dzurita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	len_s1;
	size_t	len_s2;
	char	*join;

	if (!s1)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	size = len_s1 + len_s2;
	join = (char *)malloc(size + 1);
	if (!join)
		return (NULL);
	ft_strlcpy (join, s1, len_s1 + 1);
	ft_strlcpy (join + len_s1, s2, len_s2 + 1);
	return (join);
}
