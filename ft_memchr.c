#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

#include <stdio.h>

int main()
{
	printf("%p\n", ft_memchr("helaa", 'o', 5));
	//printf("%s\n", (char *)memchr(NULL, 'm', 5));
}
