/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 21:32:28 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/12 21:23:37 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*p;
	int		i;

	i = 0;
	if (s)
	{
		if (!(p = (char *)malloc(sizeof(char) * ((ft_strlen(s) + 1)))))
			return (NULL);
		while (s[i])
		{
			p[i] = f(s[i]);
			i++;
		}
		p[i] = '\0';
		return (p);
	}
	return (NULL);
}
