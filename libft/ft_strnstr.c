/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 14:59:56 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/15 18:40:40 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t g;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack + i);
	while (i < len && haystack[i] != '\0')
	{
		g = 0;
		while (haystack[i + g] == needle[g] && needle[g] && i + g < len)
		{
			g++;
			if (needle[g] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
