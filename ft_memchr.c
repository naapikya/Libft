/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naapikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 16:21:54 by naapikya          #+#    #+#             */
/*   Updated: 2021/02/01 17:06:48 by naapikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*t_s;
	unsigned char	t_c;

	t_s = (unsigned char *)s;
	t_c = (unsigned char)c;
	while (n)
	{
		if (*t_s == t_c)
		{
			return (t_s);
		}
		t_s++;
		n--;
	}
	return (NULL);
}
