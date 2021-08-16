#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		n;

	if (c < -128 || c > 127)
		return ((char *)s);
	n = ft_strlen(s);
	while (0 <= n)
	{
		if (s[n] == c)
			return (&((char *)s)[n]);
		n--;
	}
	return (0);
}
