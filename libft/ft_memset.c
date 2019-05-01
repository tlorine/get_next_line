/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:45:04 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/06 15:23:21 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*p;
	char	a;

	p = (char *)b;
	a = (char)c;
	i = 0;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return ((void *)p);
}
