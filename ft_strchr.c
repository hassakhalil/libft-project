#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (0);
	if (c > 127 || c < -128)
		return ((char *)s);
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (0);
}
