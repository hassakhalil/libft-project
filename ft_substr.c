#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	   int		i;
	size_t		n;
	  char		*sub;

	if (!s)
		return (0);
	n = ft_strlen(s);
	if (n <= (size_t)start)
		sub = malloc(1);
	else if ((n - ((size_t)start + 1)) <= len)
		sub = malloc((n - start) + 1);
	else
		sub = malloc(len + 1);
	if (!sub)
		return (0);
	i = 0;
	while (s[i] && len > 0 && n > ((size_t)start))
	{
		sub[i] = s[start + i];
		i++;
		len--;
	}
	sub[i] = 0;
	return ((char *)sub);
}
