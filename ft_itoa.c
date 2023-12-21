/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzurita <dzurita@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:53:06 by dzurita           #+#    #+#             */
/*   Updated: 2023/11/07 16:35:09 by dzurita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_fillstr(char *str, unsigned int num, long int cont)
{
	while (num > 0)
	{
		str[cont] = '0' + (num % 10);
		num = num / 10;
		cont--;
	}
	return (str);
}

static long int	ft_cont(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int		cont;
	unsigned int	num;
	char			*str;

	cont = ft_cont(n);
	str = (char *)malloc(sizeof(char) * (cont + 1));
	if (!(str))
		return (NULL);
	str[cont--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		num = n * -1;
		str[0] = '-';
	}
	else
		num = n;
	str = ft_fillstr(str, num, cont);
	return (str);
}
