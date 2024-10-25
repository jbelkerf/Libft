/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:05:29 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/25 23:21:24 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	*r;
	int		i;
	char	x;

	x = (char)c;
	i = 0;
	p = (char *)s;
	while (*p)
	{
		if (*p == x)
		{
			r = p;
			i++;
		}
		p++;
	}
	if (x == '\0')
		return (p);
	if (i != 0)
		return (r);
	else
		return (0);
}
