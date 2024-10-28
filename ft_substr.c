/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:02:00 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/28 12:25:57 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * the substr func tries to ceate a string starting from an existing one by 
 * knwing its start and its lenght.
 * 1- first alocate enough space for the sub
 * 2- copy the sub from the existing then null terminat it then returned it
 *
 * ### hard cases 
 * 1- if the start is greater than the len of the existing then we return null
 * byte
 * 2- if the len + start is more than the len_s then we should modify the len to
 * ensure that the sub does not cos segv
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	len_s;
	size_t			i;
	char			*sub;

	len_s = ft_strlen(s);
	i = 0;
	if (len_s < start)
		return (ft_strdup(""));
	if (len_s - start < len)
		len = len_s - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (i < len && s[start])
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = 0;
	return (sub);
}
