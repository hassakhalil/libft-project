#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (0);	
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

#include <stdio.h>
int main()
{
	const char *str = "kaka";
	printf("%s\n", ft_strchr(str, 'a'));
}
