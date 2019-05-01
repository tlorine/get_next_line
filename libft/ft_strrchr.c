/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 15:36:11 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/07 15:42:43 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;

	ch = (char)c;
	i = 0;
	while (s[i] != '\0')
		i++;
	while (i != 0)
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i--;
	}
	if (ch == s[i])
		return ((char *)s + i);
	return (0);
}
