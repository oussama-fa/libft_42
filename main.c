#include "libft.h"
#include <stdio.h>

int main()
{
    char **s = ft_split("   M 123 M 456 7M89", 'M');
    while(*s)
        printf("{%s}\n", *(s++));

}