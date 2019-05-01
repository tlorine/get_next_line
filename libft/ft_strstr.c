/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:59:25 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/12 19:28:57 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	c;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		c = 0;
		while (haystack[i + c] == needle[c] && needle[c])
		{
			c++;
			if (needle[c] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
