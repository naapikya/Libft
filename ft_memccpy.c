/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naapikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:08:45 by naapikya          #+#    #+#             */
/*   Updated: 2021/02/04 15:51:39 by naapikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst,
		const void *src, int c, size_t n)
{
	unsigned char	t_c;
	unsigned char	*t_dst;
	unsigned char	*t_src;
	size_t			i;

	i = 0;
	t_c = (unsigned char)c;
	t_dst = dst;
	t_src = (unsigned char *)src;
	while (i < n)
	{
		*(t_dst + i) = *(t_src + i);
		if (*(t_src + i) == t_c)
			return (t_dst + i + 1);
		i++;
	}
	return (NULL);
}
