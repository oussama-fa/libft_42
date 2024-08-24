#include "libft.h"

int        ft_countwords(char *str, char c)
{
    int    i = 0;
    int    rst = 0;
    int    cnt = 0;
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

char    *ft_strndup(char *str, unsigned int n)
{
    unsigned int i = 0;
    char *s;

    s = malloc(n + 1);
    while (n--)
    {
        s[i] = str[i];
        i++;
    }
    s[i] = '\0';
    return (s);
}

char **ft_split(char const *s, char c)

{
    int i = 0;
    int word = 0;
    int start = 0;
    char    **strs;

    strs = malloc((sizeof(char *)) * (ft_countwords((char *)s, c) + 1));
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
    return (char **)(strs);
}

