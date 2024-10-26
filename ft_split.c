/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:07:57 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/26 20:43:10 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int c_c(char *ss, char c)
{
	int i;

	i = 0;
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
	int	j;

	i = 0;
	while (i <= w_c)
	{
		re[i] = (char *)malloc(c_c(ss, c) * sizeof(char));
		j = 0;
		while (*ss != c && *ss)
		{
			re[i][j] = *ss;
			ss++;
			j++;
		}
		ss++;
		i++;
	}
	re[i] = 0;
	return (re);
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
	while (ft_strchr(ss, c) && *ss)
	{
		w_c++;
		ss = ft_strchr(ss, c);
		ss++;
	}
	if (w_c == 0)
	{
		re = malloc(sizeof(char *));
		re[0] = 0;
		return (re);
	}
	re = (char **)malloc((w_c + 1) * sizeof(char *));
	return (fail_tab(re, fix, c, w_c));
}
/*#include <stdio.h>
int main()
{
	char *lst = "abc df kl";
	char **re = ft_split(lst, ' ');
	int i = 0;
	while (i < 4)
	{
		printf("%s\n", re[i]);
		i++;
	}
	return (0);
}*/
