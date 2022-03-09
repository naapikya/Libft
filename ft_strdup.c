/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naapikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:27:56 by naapikya          #+#    #+#             */
/*   Updated: 2021/02/02 18:07:19 by naapikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*s;
	char	*t_src;

	i = 0;
	len = 0;
	t_src = (char *)src;
	while (t_src[len])
	{
		len++;
	}
	if (!(s = (char *)malloc(sizeof(char) * len + 1)))
	{
		return (NULL);
	}
	while (t_src[i])
	{
		s[i] = t_src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
