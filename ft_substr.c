/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oussama <oussama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 02:25:06 by oussama           #+#    #+#             */
/*   Updated: 2024/09/18 02:31:31 by oussama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	string_len;
	size_t	lenght;
	char	*ret;

	if (!s)
		return (NULL);
	string_len = ft_strlen(s);
	if (start >= string_len)
		return (ft_strdup(""));
	lenght = string_len - start;
	if (lenght > len)
		lenght = len;
	ret = malloc(lenght + 1);
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s + start, lenght + 1);
	return (ret);
}
