#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

#include <stdio.h>
int main ()
{
	char s[] = "hello world";
	printf("%ld\n", ft_strlen(s));
}
