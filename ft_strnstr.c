#include "libft.h"

char *ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return (char *)(big);
	while (big[i] && i < len)
	{
		while (big[i + j] && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return (char *)(big + i);
		i++;
		j = 0;
	}
	return (0);
}

