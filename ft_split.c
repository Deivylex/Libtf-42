/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzurita <dzurita@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:51:01 by dzurita           #+#    #+#             */
/*   Updated: 2023/11/07 16:23:08 by dzurita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_new_str(char const *s, int len)
{
	int		i;
	char	*substr;

	if (!s)
		return (NULL);
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	s = s - len;
	while (s[i] && len > i)
	{
		substr[i] = s[i];
		i++;
	}
	substr[len] = '\0';
	return (substr);
}

static char	**free_array(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (0);
}

static int	ft_cont_str(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c && j == 0)
		{
			i++;
			j++;
		}
		if (*s == c && j != 0)
			j = 0;
		s++;
	}
	return (i);
}

static char	**ft_cpy_words(const char *s, char **src, char c, int num_w)
{
	int	end;
	int	i;

	i = 0;
	while (i < num_w)
	{
		while (*s == c)
			s++;
		end = 0;
		while (*s != c && *s != '\0')
		{
			s++;
			end++;
		}
		src[i] = ft_new_str(s, end);
		if (!src[i])
			return (free_array(src, i));
		i++;
	}
	src[i] = NULL;
	return (src);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	char			**src;

	if (!s)
		return (NULL);
	i = ft_cont_str(s, c);
	src = (char **)malloc(sizeof(char *) * (i + 1));
	if (!src)
		return (NULL);
	src = ft_cpy_words(s, src, c, i);
	return (src);
}
