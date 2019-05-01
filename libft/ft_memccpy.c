/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 15:25:19 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/12 15:18:29 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	ch;

	i = 0;
	d = (unsigned char *)destination;
	s = (unsigned char *)source;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (s[i] == ch)
		{
			d[i] = s[i];
			return ((void *)d + i + 1);
		}
		d[i] = s[i];
		i++;
	}
	return (NULL);
}
