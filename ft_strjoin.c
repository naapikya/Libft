/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naapikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 13:32:33 by naapikya          #+#    #+#             */
/*   Updated: 2021/02/06 18:11:28 by naapikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	j = 0;
	i = 0;
	if (!(tmp = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (s1[i])
	{
		tmp[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		tmp[j] = s2[i];
		i++;
		j++;
	}
	tmp[j] = '\0';
	return (tmp);
}
