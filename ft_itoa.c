/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <oufarah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:03:09 by oufarah           #+#    #+#             */
/*   Updated: 2024/10/22 18:03:10 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	lenght(long nb)
{
	size_t	i;

	i = 0;
	if (nb < 0)
		nb *= -1;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	int		flag;
	char	*s;

	(1) && (flag = 0, num = n, len = lenght(num));
	if (!n)
		return (ft_strdup("0"));
	else if (num < 0)
		(1) && (len++, flag = 1, num *= -1);
	s = malloc (len + 1);
	if (!s)
		return (NULL);
	if (flag == 1)
		s[0] = '-';
	s[len] = '\0';
	len--;
	while (len >= flag)
	{
		s[len] = num % 10 + 48;
		num /= 10;
		len--;
	}
	return (s);
}
