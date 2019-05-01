/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 20:34:27 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/15 19:22:34 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				minus;
	int				g;
	long long int	nb;

	g = 0;
	nb = 0;
	i = ft_skipspace(str);
	minus = (str[i] == '-' ? -1 : 1);
	if (str[i] == '-' || str[i] == '+')
		i++;
	nb = ft_skipchar(str + i, '0');
	i = i + nb;
	while (str[i] >= '0' && str[i] <= '9')
	{
		g++;
		i++;
	}
	if ((g == 19 && ft_strcmp(str + i - g, "9223372036854775808") >= 0
				&& minus < 0) || (g > 19 && minus < 0))
		return (0);
	if ((g == 19 && ft_strcmp(str + i - g, "9223372036854775808") >= 0)
			|| (g > 19))
		return (-1);
	return (ft_linenum(str + i - g - nb) * minus);
}
