/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:07:35 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/11/01 13:26:32 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * striteri take a strin s and a pointer to function f and using f to iterite 
 * the string
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	lenght;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	lenght = ft_strlen(s);
	while (i < lenght && s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
