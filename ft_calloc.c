/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <oufarah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:02:49 by oufarah           #+#    #+#             */
/*   Updated: 2024/10/27 22:18:47 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;
	size_t	bytes;

	if (count == 0 || size == 0)
	{
		s = malloc(0);
		if (!s)
			return (NULL);
		return (s);
	}
	bytes = count * size;
	if (bytes / size != count)
		return (NULL);
	s = malloc (count * size);
	if (!s)
		return (NULL);
	ft_memset(s, 0, count * size);
	return (s);
}
