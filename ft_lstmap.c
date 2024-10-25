/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:28:31 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/25 23:46:22 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		if (!new_content)
		{
			while (nw)
			{
				del(nw->content);
				nw = nw->next;
			}
		}
		new_node = ft_lstnew(new_content);
		ft_lstadd_back(&nw, new_node);
		p = p->next;
	}
	return (nw);
}
