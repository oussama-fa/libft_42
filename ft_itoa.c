#include "libft.h"

int    lenght(long nb)
{
    int i = 0;
    if (nb < 0)
        nb *= -1;
    while (nb > 0)
    {
        nb /= 10;
        i++;
    }
    return (i);
}

char    *ft_itoa(int n)
{
    long num = n;
    int len = lenght(num);
    char    *s;
    if (n == 0)
    {
        s = malloc (2);
        s = "0";
        return (s);
    }
    else if (num < 0)
    {
        s = malloc (len + 2);
        num *= -1;
        s[0] = '-';
        s[len + 1] = '\0';
    }
    else if (num > 0)
    {
        s = malloc (len + 1);
        s[len + 1] = '\0';
        len--;
    }
    while (num > 0)
    {
        s[len] = num % 10 + 48;
        num /= 10;
        len--;
    }
    return (s);
}