/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:22:02 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/12 20:04:13 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		c;
	char	*p;

	i = 0;
	c = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(p = (char *)malloc(sizeof(char) *
	(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[c] != '\0')
	{
		p[i] = s2[c];
		i++;
		c++;
	}
	p[i] = '\0';
	return (p);
}
