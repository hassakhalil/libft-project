#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	//if (c > 127 || c < -128)
		//return ((char *)s);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
