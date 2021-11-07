#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		n;

	n = ft_strlen(s);
	while (0 <= n)
	{
		if (s[n] == (char)c)
			return (&((char *)s)[n]);
		n--;
	}
	return (0);
}
