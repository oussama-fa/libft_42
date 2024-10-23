/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <oufarah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:03:39 by oufarah           #+#    #+#             */
/*   Updated: 2024/10/23 17:01:27 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(char *str, char c)
{
	size_t	i;
	size_t	rst;
	size_t	cnt;

	i = 0;
	rst = 0;
	cnt = 0;
	while (str[i])
	{
		if (str[i] == c)
			rst = 0;
		else if (rst == 0)
		{
			rst = 1;
			cnt++;
		}
		i++;
	}
	return (cnt);
}

static char	*ft_strndup(char *str, size_t n)
{
	size_t	i;
	char	*s;

	i = 0;
	s = malloc(n + 1);
	if (!s)
		return (NULL);
	while (n--)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word;
	int		start;
	char	**strs;

	if (!s)
		return (NULL);
	(1) && (i = 0, word = 0, start = 0);
	strs = malloc((sizeof(char *)) * (ft_countwords((char *)s, c) + 1));
	if (!strs)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && (s[i]))
			i++;
		start = i;
		while (s[i] != c && (s[i]))
			i++;
		if (i > start)
			strs[word++] = ft_strndup((char *)s + start, i - start);
	}
	strs[word] = NULL;
	return (strs);
}
