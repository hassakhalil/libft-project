#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	 int		i;
	char		*sub;

	i = 0;
	sub = malloc(len * sizeof(char) + 1);
	if (!s || !sub)
		return (0);
	while (len > 0)
	{
		sub[i] = s[start + i];
		i++;
		len--;
	}
	sub[i] = 0;
	return (sub);
}

