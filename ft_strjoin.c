#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *a;
    size_t  len;

    if (!s1 && !s2)
        return (NULL);
    if (!s1)
        return (ft_strdup(s2));
    else if (!s2)
        return (ft_strdup(s1));
    len = ft_strlen(s1) + ft_strlen(s2) + 1;
    a = malloc (len);
    if (!a)
        return (NULL);
    ft_strlcpy(a, s1, len);
    ft_strlcat(a, s2, len);
    return (a);
}