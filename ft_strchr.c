/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:07:49 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/25 23:10:28 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char		*p;
	unsigned char		x;

	x = (unsigned char)c;
	p = (unsigned char *)s;
	while (*p)
	{
		if (*p == x)
			return ((char *)p);
		p++;
	}
	if (x == 0)
		return ((char *)p);
	else
		return (0);
}
