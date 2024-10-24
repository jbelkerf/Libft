/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:05:15 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/24 19:50:36 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

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
	while (is_set(s[i], set))
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

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*re;
	int		l;

	i = 0;
	if (*s1 == '\0')
		return (ft_strdup(""));
	if (*set == '\0')
		return (ft_strdup(s1));
	while (is_set(s1[i], set))
		i++;
	if (s1[i] == '\0')
	{
		re = (char *)malloc(1);
		*re = 0;
		return (re);
	}
	l = ft_strlen(s1) - i;
	i = ft_strlen(s1);
	i--;
	while (is_set(s1[i], set))
		i--;
	l = l - (ft_strlen(s1) - i) + 1;
	re = f_copy(s1, l, set);
	return (re);
}
