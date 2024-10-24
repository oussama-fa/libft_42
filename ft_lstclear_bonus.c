/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <oufarah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:11:10 by oufarah           #+#    #+#             */
/*   Updated: 2024/10/24 18:19:21 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*clear;
	t_list	*tmp;

	tmp = *lst;
	while (tmp)
	{
		del(tmp->content);
		clear = tmp;
		tmp = tmp->next;
		free(clear);
	}
	*lst = NULL;
}
