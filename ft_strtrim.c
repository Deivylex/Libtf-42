/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzurita <dzurita@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:22:46 by dzurita           #+#    #+#             */
/*   Updated: 2023/11/07 16:31:22 by dzurita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const	*set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	i2;
	size_t	i3;
	char	*trim;

	if (!s1)
		return (NULL);
	i = 0;
	while (s1[i] && check_set(s1[i], set))
		i++;
	i2 = ft_strlen(s1);
	while (i2 > i && check_set(s1[i2 - 1], set))
		i2--;
	trim = (char *)malloc((i2 - i) + 1);
	if (!trim)
		return (NULL);
	i3 = 0;
	while (i < i2)
	{
		trim[i3++] = s1[i++];
	}
	trim[i3] = '\0';
	return (trim);
}
