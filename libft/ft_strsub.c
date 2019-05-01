/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:53:54 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/12 21:19:38 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	count;
	unsigned int	size;
	char			*p;

	if (!s)
		return (NULL);
	count = (unsigned int)len;
	if (!(p = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	size = 0;
	while (size < count && s[start] != '\0')
	{
		p[size] = s[start];
		size++;
		start++;
	}
	p[size] = '\0';
	return (p);
}
