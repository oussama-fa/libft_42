#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    const char	*largestring = "Foo Bar	Baz";
    const char	*smallstring = "Bar";
    char *ptr;

    ptr = ft_strnstr(largestring,	smallstring, 4);
    printf("%s", ptr);
}