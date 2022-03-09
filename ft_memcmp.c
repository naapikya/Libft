/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naapikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 17:07:13 by naapikya          #+#    #+#             */
/*   Updated: 2021/02/04 15:11:12 by naapikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t_s1;
	unsigned char	*t_s2;
	size_t			i;

	i = 0;
	t_s1 = (unsigned char *)s1;
	t_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*t_s2 != *t_s1)
			return (*t_s1 - *t_s2);
		i++;
		t_s1++;
		t_s2++;
	}
	if (i != n)
		return (*t_s1 - *t_s2);
	return (0);
}
