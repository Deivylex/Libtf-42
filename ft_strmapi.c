/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzurita <dzurita@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:08:02 by dzurita           #+#    #+#             */
/*   Updated: 2023/11/01 18:15:43 by dzurita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapi;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	mapi = (char *)malloc(len + 1);
	if (!mapi)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mapi[i] = f (i, s[i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}
