/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:28:31 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/28 01:40:37 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_clear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	p = *lst;
	while (p)
	{
		p = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = p;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*new_content;
	t_list	*new_node;
	t_list	*p;
	t_list	*nw;

	nw = 0;
	if (!lst)
		return (lst);
	p = lst;
	while (p)
	{
		new_content = f(p->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			free(new_node);
			ft_clear(&nw, del);
			return (0);
		}
		ft_lstadd_back(&nw, new_node);
		p = p->next;
	}
	return (nw);
}
