/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:07:42 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/28 13:56:27 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * 
 */
char	*ft_strdup(const char *s)
{
	char	*re;

	re = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (re == NULL)
		return (NULL);
	ft_strlcpy(re, s, ft_strlen(s) + 1);
	return (re);
}
