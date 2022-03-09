/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naapikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:29:23 by naapikya          #+#    #+#             */
/*   Updated: 2021/02/08 13:52:53 by naapikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*tmp;
	char	*s;

	tmp = (char *)str;
	s = NULL;
	while (*tmp)
	{
		if (*tmp == (char)c)
			s = tmp;
		tmp++;
	}
	if (*tmp == (char)c)
		s = tmp;
	return (s);
}
