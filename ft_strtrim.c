/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:05:15 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/31 11:27:24 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * the f_copy create the returned string it first alocate the memory then skip
 * the set and copy the rest
 */
static char	*f_copy(const char *s, int l, const char *set)
{
	char	*re;
	int		i;
	int		j;

	re = (char *)malloc((l + 1) * sizeof(char));
	if (re == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (ft_strch(set, s[i]))
	{
		i++;
	}
	while (j < l)
	{
		re[j] = s[i];
		i++;
		j++;
	}
	re[j] = 0;
	return (re);
}

/*
 * the strim take a string and a set and remove the set from the begging and the 
 * end of that string
 * it count the number of set in both beging and the end and subtract it from the
 * total len then give the string and the new len and the set to f_copy to create
 * the new one then return it
 *
 * ### hard cases
 * 1- if the string is empty or full of sets we return a freable null
 * 2- if set is null we return the total s
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*re;
	int		len;

	i = 0;
	if (*s1 == '\0')
		return (ft_strdup(""));
	if (*set == '\0')
		return (ft_strdup(s1));
	while (ft_strchr(set, s[i]))
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	len = ft_strlen(s1) - i;
	i = ft_strlen(s1);
	i--;
	while (ft_strchr(set, s[1]))
		i--;
	len = len - (ft_strlen(s1) - i) + 1;
	re = f_copy(s1, len, set);
	return (re);
}
