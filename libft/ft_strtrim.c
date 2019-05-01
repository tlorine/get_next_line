/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 13:23:03 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/12 18:25:32 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		c;
	int		b;
	char	*p;

	i = 0;
	c = 0;
	b = 0;
	if (!s)
		return (NULL);
	while (s[c] == '\t' || s[c] == 32 || s[c] == '\n')
		c++;
	while (s[i] != '\0')
		i++;
	while ((s[i] == 32 || s[i] == '\n' || s[i] == '\t'
	|| s[i] == '\0') && (i > c))
		i--;
	if (!(p = (char *)malloc(sizeof(char) * (i - c + 2))))
		return (NULL);
	while (c <= i && s[c])
		p[b++] = s[c++];
	p[b] = '\0';
	return (p);
}
