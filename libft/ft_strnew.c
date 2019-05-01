/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 20:55:11 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/12 17:22:59 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*p;
	size_t	i;

	i = 0;
	if (!(p = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (i < size)
	{
		p[i] = 0;
		i++;
	}
	p[i] = '\0';
	if (p != NULL)
		return (p);
	return (NULL);
}
