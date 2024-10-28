/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:07:57 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/28 01:22:57 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**h_fail(char **re, int elm)
{
	int	i;

	i = 0;
	while (i < elm)
	{
		free(re[i]);
		i++;
	}
	free(re);
	return (0);
}

static int	c_c(char *ss, char c)
{
	int	i;

	i = 0;
	while (*ss == c)
		ss++;
	while (*ss != c && *ss)
	{
		ss++;
		i++;
	}
	return (i + 1);
}

static char	**fill_tab(char **re, char *ss, char c, int w_c)
{
	int	i;
	int	j;

	i = 0;
	while (i < w_c)
	{
		re[i] = (char *)malloc(c_c(ss, c) * sizeof(char));
		if (re[i] == 0)
			return (h_fail(re, i));
		j = 0;
		while (*ss == c)
			ss++;
		while (*ss != c && *ss)
		{
			re[i][j] = *ss;
			ss++;
			j++;
		}
		re[i][j] = 0;
		if (*ss)
			ss++;
		i++;
	}
	re[i] = 0;
	return (re);
}

static int	c_w(char *ss, char c)
{
	int	i;

	i = 0;
	while (*ss)
	{
		if (*ss != c)
		{
			i++;
			while (*ss != c && *ss)
				ss++;
		}
		if (*ss)
			ss++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**re;
	char	*ss;
	int		w_c;

	ss = (char *)s;
	w_c = c_w(ss, c);
	if (w_c == 0)
	{
		re = malloc(sizeof(char *));
		if (re == 0)
			return (0);
		re[0] = 0;
		return (re);
	}
	re = (char **)malloc((w_c + 1) * sizeof(char *));
	if (re == 0)
		return (0);
	return (fill_tab(re, ss, c, w_c));
}
/*#include <stdio.h>
int main()
{
	char *lst = "      split       this for   me  !       ";
	char **re = ft_split(lst, ' ');
	int i = 0;
	while (i <= 5)
	{
		printf("%s\n", re[i]);
		i++;
	}
	return (0);
}*/
