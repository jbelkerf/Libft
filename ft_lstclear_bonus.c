/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:01:02 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/11/01 13:39:31 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * the lstclear take a lst and del the entire lst
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	if (lst == NULL || del == NULL)
		return ;
	p = *lst;
	while (p)
	{
		p = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = p;
	}
}
