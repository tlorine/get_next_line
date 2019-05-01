/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 16:04:57 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/15 17:24:16 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *sp;
	t_list *new;

	if (!lst || !f)
		return (NULL);
	sp = f(lst);
	new = sp;
	while (lst->next)
	{
		lst = lst->next;
		if (!(sp->next = f(lst)))
		{
			free(sp->next);
			return (NULL);
		}
		sp = sp->next;
	}
	return (new);
}
