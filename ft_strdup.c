/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oussama <oussama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:48:14 by oussama           #+#    #+#             */
/*   Updated: 2024/09/19 06:18:06 by oussama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*new;

	i = -1;
	new = malloc (ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	while (s[++i])
		new[i] = s[i];
	new[i] = '\0';
	return (new);
}
