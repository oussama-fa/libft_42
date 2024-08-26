#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	dst_len;

	if (!dst && !n)
		return (ft_strlen(src));
	i = 0;
	dst_len = ft_strlen(dst);
	if (n <= ft_strlen(dst))
		return (ft_strlen(src) + n);
	while (src[i] && (dst_len + i) < n - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + ft_strlen(src));
}