/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oussama <oussama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 02:38:41 by oussama           #+#    #+#             */
/*   Updated: 2024/09/17 03:29:49 by oussama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*src_1;
	const unsigned char	*src_2;

	src_1 = (const unsigned char *) s1;
	src_2 = (const unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (src_1[i] != src_2[i])
			return (src_1[i] - src_2[i]);
		i++;
	}
	return (0);
}
