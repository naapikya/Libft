/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naapikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 19:05:05 by naapikya          #+#    #+#             */
/*   Updated: 2021/02/06 18:46:30 by naapikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest,
		const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (dest[j] && j < destsize)
		j++;
	while ((src[i] && (j + i + 1) < destsize))
	{
		dest[j + i] = src[i];
		i++;
	}
	if (j != destsize)
		dest[j + i] = '\0';
	return (j + ft_strlen(src));
}
