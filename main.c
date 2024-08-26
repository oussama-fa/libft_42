#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    int nb = 2498;
    char *s = ft_itoa(nb);
    while (*s)
        write(1, s++, 1);
}