#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "HELLO";
    char s2[] = "HELLo";
    printf("{%d}\n", ft_strncmp(s1, s2, 5));
}