/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 13:35:22 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/12 21:30:04 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*p2;

	if (!arr1 && !arr2 && !n)
		return (0);
	i = 0;
	p = (unsigned char *)arr1;
	p2 = (unsigned char *)arr2;
	while (i < n)
	{
		if (p[i] != p2[i])
			return (p[i] - p2[i]);
		i++;
	}
	return (0);
}
