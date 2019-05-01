/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:21:31 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/14 21:26:13 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	const *content, size_t content_size)
{
	t_list *element;

	if (!(element = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		element->content = NULL;
		element->content_size = 0;
	}
	else
	{
		if (!(element->content = malloc(content_size)))
		{
			free(element);
			return (NULL);
		}
		ft_memcpy(element->content, content, content_size);
		element->content_size = content_size;
	}
	element->next = NULL;
	return (element);
}
