#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;

	copy = malloc(ft_strlen(s) + 1);
	if (!s || !copy)
		return (0);
	return (ft_memcpy(copy, s, ft_strlen(s) + 1));
}
