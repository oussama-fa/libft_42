#include "libft.h"

int        ft_countwords(char *str, char c)
{
    int    i;
    int    rst;
    int    cnt;

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

char    *ft_strndup(char *str, size_t n)
{
    size_t i = 0;
    char *s;

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

char **ft_split(char const *s, char c)
{
    int i;
    int word;
    int start;
    char    **strs;

    i = 0;
    word = 0;
    start = 0;
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
    return (char **)(strs);
}