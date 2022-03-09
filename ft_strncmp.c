/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naapikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 16:50:22 by naapikya          #+#    #+#             */
/*   Updated: 2021/02/03 12:09:12 by naapikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*t_s1;
	unsigned char	*t_s2;

	t_s1 = (unsigned char *)s1;
	t_s2 = (unsigned char *)s2;
	i = 0;
	while (t_s1[i] && t_s2[i] && i < n)
	{
		if (t_s2[i] != t_s1[i])
			return (t_s1[i] - t_s2[i]);
		i++;
	}
	if (i != n)
		return (t_s1[i] - t_s2[i]);
	return (0);
}
