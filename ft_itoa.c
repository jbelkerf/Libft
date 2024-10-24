/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:00:27 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/24 19:48:19 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	int	w;

	w = 0;
	while (n != 0)
	{
		n = n / 10;
		w++;
	}
	return (w);
}

static char	*full_it(int n, int w)
{
	char	*re;

	if (n < 0)
	{
		n = n * (-1);
		w = w + 1;
	}
	re = (char *)malloc((w + 1) * sizeof(char));
	if (re == NULL)
		return (NULL);
	re[w] = 0;
	while (n != 0)
	{
		w--;
		re[w] = n % 10 + '0';
		n = n / 10;
	}
	if (w == 1)
		re[0] = '-';
	return (re);
}

char	*ft_itoa(int n)
{
	char	*cas;
	int		w;

	cas = "-2147483648";
	if (n == 0)
		cas = "0";
	if (n == -2147483648 || n == 0)
		return (ft_strdup(cas));
	w = count(n);
	return (full_it(n, w));
}
