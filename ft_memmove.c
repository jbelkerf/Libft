/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:09:20 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/25 21:27:07 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *
 */
static int	check_overl(char *d, char *s, size_t n)
{
	if (s < d && s + n > d)
		return (1);
	if (d < s && d + n > s)
		return (2);
	return (0);
}

static void	*r_cpy(void *dest, const void *src, size_t n)
{
	char	*b;
	char	*s;
	size_t	i;

	b = (char *)dest;
	s = (char *)src;
	if (n == 0)
		return (dest);
	if (b == NULL && s == NULL)
		return (NULL);
	i = 0;
	while (n)
	{
		n--;
		b[n] = s[n];
	}
	return (dest);
}

/*
 * the memmove func check if the src and the dest is null then it returns null
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	int		i;

	s = (char *)src;
	d = (char *)dest;
	if (d == 0 && s == 0)
		return (0);
	i = check_overl(d, s, n);
	if (i == 0 || i == 2)
		return (ft_memcpy(dest, src, n));
	return (r_cpy(dest, src, n));
}
