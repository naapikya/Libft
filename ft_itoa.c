/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naapikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 15:38:47 by naapikya          #+#    #+#             */
/*   Updated: 2021/02/05 16:36:04 by naapikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_length(int n)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*str;
	long	tmp;
	int		len;
	int		i;

	tmp = n;
	i = 0;
	len = ft_length(tmp);
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (tmp < 0)
	{
		str[i] = '-';
		tmp *= -1;
	}
	i = len - 1;
	if (tmp == 0)
		str[i] = '0';
	while (tmp)
	{
		str[i--] = tmp % 10 + '0';
		tmp = tmp / 10;
	}
	str[len] = '\0';
	return (str);
}
