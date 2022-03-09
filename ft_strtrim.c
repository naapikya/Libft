/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naapikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 13:59:06 by naapikya          #+#    #+#             */
/*   Updated: 2021/02/06 18:49:17 by naapikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_helper(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	int		f;
	int		l;
	int		i;

	f = 0;
	i = 0;
	l = ft_strlen(s1);
	if (!s1 && !set)
		return (NULL);
	while (s1[f] && ft_helper(set, s1[f]))
		f++;
	while (l > f && ft_helper(set, s1[l - 1]))
		l--;
	if (!(tmp = malloc(sizeof(char) * (l - f + 1))))
		return (NULL);
	while (f < l)
	{
		tmp[i] = s1[f];
		f++;
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
