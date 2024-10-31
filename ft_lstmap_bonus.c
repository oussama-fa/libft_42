/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <oufarah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:09:46 by oufarah           #+#    #+#             */
/*   Updated: 2024/10/29 23:11:07 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*new;
	t_list	*res;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		res = ft_lstnew(tmp);
		if (!res)
		{
			del(tmp);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, res);
		lst = lst->next;
	}
	return (new);
}
