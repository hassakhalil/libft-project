#include "libft.h"
#include <string.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	   int		i;
	size_t		k;
	size_t		n;
	  char		*sub;

	if (!s)
		return (0);
	n = ft_strlen(s);
	k = (size_t)start;
	if (len == 1)
		sub = malloc(1);
	else if ((n - (k + 1)) <= len)
		sub = malloc((n - start) + 1);
	else
		sub = malloc(len + 1);
	if (!sub)
		return (0);
	i = 0;
	while (s[i] && len > 0)
	{
		sub[i] = s[start + i];
		i++;
		len--;
	}
	sub[i] = 0;
	return ((char *)sub);
}
#include <stdio.h>
int main ()
{
	printf("%s\n", ft_substr("tripouille", 100, 1));
}
