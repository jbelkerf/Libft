/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:05:29 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/28 14:50:31 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * this func cherche for the last ocu of the char c in the string s
 * it go through the string archive each ocu in  r and if we reach the end we 
 * return the last archive ocu
 * ### hard cases
 * 1- if the char we look for is the null '\0' the we return the null terminator
 * of s
 */
char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*p;
	unsigned char	*r;
	int				i;
	unsigned char	x;

	x = (unsigned char)c;
	i = 0;
	p = (unsigned char *)s;
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
		return ((char *)p);
	if (i != 0)
		return ((char *)r);
	else
		return (0);
}
