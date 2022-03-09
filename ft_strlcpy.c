/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naapikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 17:15:57 by naapikya          #+#    #+#             */
/*   Updated: 2021/02/04 16:39:10 by naapikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest,
		const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (0);
	while (src[i])
	{
		i++;
	}
	if (dstsize == 0)
		return (i);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}
