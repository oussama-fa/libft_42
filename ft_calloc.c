/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <oufarah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:02:49 by oufarah           #+#    #+#             */
/*   Updated: 2024/10/23 14:34:36 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;
	size_t	check;

	check = count * size;
	if (size != 0 && size != check / count)
		return (NULL);
	s = malloc (count * size);
	if (!s)
		return (NULL);
	ft_memset(s, 0, count * size);
	return (s);
}
