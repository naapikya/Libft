/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naapikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 12:36:44 by naapikya          #+#    #+#             */
/*   Updated: 2021/02/06 18:30:28 by naapikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	if (!(tmp = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	new = tmp;
	lst = lst->next;
	while (lst)
	{
		if (!(tmp = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&new, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&new, tmp);
	}
	return (new);
}
