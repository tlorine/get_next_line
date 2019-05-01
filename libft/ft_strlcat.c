/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 14:44:04 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/15 18:12:19 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t d;

	i = 0;
	d = 0;
	while (dst[d] && d < size)
		d++;
	while ((i + d + 1) < size && src[i])
	{
		dst[d + i] = src[i];
		i++;
	}
	if (d < size)
		dst[d + i] = '\0';
	return (d + ft_strlen(src));
}
