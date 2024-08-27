#include "libft.h"

int ft_atoi(const char *nptr)
{
    size_t  i;
    long long res;
    short sig;

    i = 0;
    res = 0;
    sig = 1;
    while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if (nptr[i] == '+' || nptr[i] == '-')
    {
        if (nptr[i] == '-')
            sig *= -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
        res = res * 10 + (nptr[i++] - 48);
    return ((int) res * sig);
}