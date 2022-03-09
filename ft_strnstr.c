/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naapikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 13:40:37 by naapikya          #+#    #+#             */
/*   Updated: 2021/02/03 15:07:37 by naapikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*entatox;
	char	*tox;

	entatox = (char *)needle;
	tox = (char *)haystack;
	i = 0;
	if (entatox[0] == '\0')
		return (tox);
	while (tox[i] && i < len)
	{
		j = 0;
		while (entatox[j] == tox[i + j] && i + j < len)
		{
			if (entatox[j + 1] == '\0')
				return (tox + i);
			j++;
		}
		i++;
	}
	return (0);
}
