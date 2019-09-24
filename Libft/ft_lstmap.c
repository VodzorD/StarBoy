/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wscallop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 18:14:37 by wscallop          #+#    #+#             */
/*   Updated: 2019/09/24 21:24:03 by wscallop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void		del(void *content, size_t content_size)
{
	ft_memdel(content);
	content_size = 0;
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ls;
	t_list	*l;
	t_list	*tmp;

	ls = ft_lstnew(f(lst)->content, f(lst)->content_size);
	if (lst && f && ls)
	{
		l = ls;
		while (lst->next)
		{
			tmp = f(lst->next);
			ls->next = ft_lstnew(tmp->content, tmp->content_size);
			if (!ls->next)
			{
				ft_lstdel(&l, del);
				return (NULL);
			}
			lst = lst->next;
			ls = ls->next;
		}
		return (l);
	}
	return (NULL);
}
