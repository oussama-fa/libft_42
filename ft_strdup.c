/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <oufarah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:03:45 by oufarah           #+#    #+#             */
/*   Updated: 2024/10/23 16:19:52 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*new;

	i = -1;
	new = malloc (ft_strlen(s1) + 1);
	if (!new)
		return (NULL);
	while (s1[++i])
		new[i] = s1[i];
	new[i] = '\0';
	return (new);
}
