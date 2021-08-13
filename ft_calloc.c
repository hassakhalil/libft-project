#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*x;

	x = malloc(nmemb * size);
	if (x == 0)
		return (0);
	ft_bzero(x, nmemb * size);
	return (x);
}
#include <stdio.h>
int main ()
{
	printf("%p\n", ft_calloc(0, 4));
	printf("%p\n", malloc(0));
}
