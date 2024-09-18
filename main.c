/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oussama <oussama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:07:46 by oussama           #+#    #+#             */
/*   Updated: 2024/09/18 02:37:34 by oussama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int *ret = ft_memcmp(NULL, NULL, 4);
	printf("%d", ret);
	
	return (0);
}
	