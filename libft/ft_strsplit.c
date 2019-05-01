/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 17:44:36 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/13 16:23:06 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		n;
	int		h;
	char	**p;

	i = 0;
	n = 0;
	h = 0;
	if (!s)
		return (NULL);
	if (!(p = (char **)malloc(ft_qlines(s, c) * sizeof(char *) + 1)))
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			h++;
		}
		p[n++] = (char*)malloc(sizeof(char) * (h + 1));
		h = 0;
	}
	return (p = ft_flines(p, s, c));
}
