/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 21:55:51 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/12 18:07:23 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		i;

	i = 0;
	if (s)
	{
		if (!(p = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
			return (NULL);
		while (s[i])
		{
			p[i] = f(i, s[i]);
			i++;
		}
		p[i] = '\0';
		return (p);
	}
	return (NULL);
}
