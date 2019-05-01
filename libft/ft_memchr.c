/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 19:20:53 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/07 15:25:21 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t	i;
	char	*p;
	char	g;

	p = (char *)arr;
	g = (char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == g)
			return ((void *)p + i);
		i++;
	}
	return (0);
}
