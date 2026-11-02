/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmanas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 16:06:20 by aelmanas          #+#    #+#             */
/*   Updated: 2026/11/01 16:06:23 by aelmanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *l, void *(*f)(void *), void (*d)(void *))
{
	t_list	*new_l;
	t_list	*new_node;
	void	*mapped_c;

	if (!l || !f)
		return (NULL);
	new_l = NULL;
	while (l)
	{
		mapped_c = f(l->content);
		new_node = ft_lstnew(mapped_c);
		if (!new_node)
		{
			d(mapped_c);
			ft_lstclear(&new_l, d);
			return (NULL);
		}
		ft_lstadd_back(&new_l, new_node);
		l = l->next;
	}
	return (new_l);
}
