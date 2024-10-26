/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:07:57 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/26 19:24:23 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int c_c(char *ss, char c)
{
	int i;

	while (*ss != c && *ss)
	{
		ss++;
		i++;
	}
	return (i + 1);
}

char	**fail_tab(char **re, char *ss, char c, int w_c)
{
	int	i;
	int c;

	i = 0;
	while (i < w_c)
	{
		re[i] = (char *)malloc(c_c(ss, c) * sizeof(char));
		j = 0;
		while (*ss != c && *ss)
		{
			re[i][j] = *ss;
			j++;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**re;
	char	*fix;
	char	*ss;
	int		w_c;

	ss = ft_strtrim(s, &c);
	fix = ss;
	w_c = 0;
	while (ft_strchr(ss, c))
	{
		w_c++;
		ss = ft_strchr(ss, c);
		if (!(*ss))
			ss++;
	}
	re = (char *)malloc((w_c + 1) * sizeof(char *));
	return (fail_tab(re, fix, c, w_c));
}
