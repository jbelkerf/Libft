/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:05:38 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/28 12:31:31 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * this fun search if the string lil is in the big if yes it return a pointer
 * to the first ocu of lil in big
 * #hard cases
 * 1- if lil is '\0' then we return the whole big
 * 2- if lil is nt apearing in big we return null
 */
char	*ft_strnstr(const char *big, const char *lil, size_t len)
{
	size_t	j;
	size_t	i;
	char	*p;

	if (*lil == '\0')
		return ((char *)big);
	i = 0;
	while (big[i])
	{
		j = 0;
		if (big[i] == lil[j])
		{
			while (i + j < len && lil[j] && big[i])
			{
				if (big[i + j] != lil[j])
					break ;
				j++;
			}
			p = (char *)(big + i);
			if (lil[j] == '\0')
				return (p);
		}
		i++;
	}
	return (0);
}
