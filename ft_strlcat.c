#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	x;
	size_t	y;

	if (!src || !dest)
		return (0);
	x = ft_strlen(dest);
	y = ft_strlen(src);
	if (size <= x)
		return (size + y);
	i = 0;
	while (src[i] && (x + i) < (size - 1))
	{
		dest[x + i] = src[i];
		i++;
	}
	dest[x + i] = 0;
	return (x + y);
}
