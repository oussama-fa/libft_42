#include "libft.h"

static size_t	lenght(long nb)
{
	size_t	i;

	i = 0;
	if (nb < 0)
		nb *= -1;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*s;

	num = n;
	len = lenght(num);
	if (n == 0)
	{
		s = malloc (2);
		if (!s)
			return (NULL);
		s = "0";
		return (s);
	}
	else if (num < 0)
	{
		s = malloc (len + 2);
		if (!s)
			return (NULL);
		num *= -1;
		s[0] = '-';
		s[len + 1] = '\0';
	}
	else if (num > 0)
	{
		s = malloc (len + 1);
		if (!s)
			return (NULL);
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
