#include "libft.h"

char	*ft_strdup(const char *s)
	{
	size_t  i;
	char    *new;

	i = -1;
	new = malloc (ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	while (s[++i])
		new[i] = s[i];
	new[i] = '\0';
	return (new);
}