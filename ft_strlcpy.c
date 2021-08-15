#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;

	if (!dest || !src)
		return (0);
	i = 0;
	if (size)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (ft_strlen(src));
}
#include <stdio.h>
int main ()
{
	char src[] = "NULL";
	char dest[] = "1337";
	printf("%ld\n", ft_strlcpy(dest, src, 4));
	printf("%s\n", dest);
}
