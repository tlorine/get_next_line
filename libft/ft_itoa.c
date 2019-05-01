/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:40:27 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/14 16:40:54 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	int				i;
	char			*p;
	unsigned int	save;

	save = (n < 0 ? n * -1 : n);
	i = (n <= 0 ? 1 : 0);
	while (save > 0)
	{
		save = save / 10;
		i++;
	}
	if ((p = (char *)malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	p[i] = '\0';
	save = (n < 0 ? n * -1 : n);
	while (i-- > 0)
	{
		p[i] = save % 10 + '0';
		save = save / 10;
		if (n < 0 && i == 1)
			i--;
		if (n < 0 && i == 0)
			p[i] = '-';
	}
	return (p);
}
