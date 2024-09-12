/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oussama <oussama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:43:42 by oussama           #+#    #+#             */
/*   Updated: 2024/09/11 17:55:01 by oussama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t		i;
	long		res;
	long		check;
	short		sig;

	(1) && (i = 0, res = 0, sig = 1);
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sig *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		check = res;
		res = res * 10 + (nptr[i++] - 48);
		if (res < check && sig == 1)
			return (-1);
		else if (res < check && sig == -1)
			return (0);
	}
	return ((int) res * sig);
}
