/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 19:53:25 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/07 21:00:30 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)malloc(sizeof(unsigned char) * size);
	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
