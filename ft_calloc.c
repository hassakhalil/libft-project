#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*x;

	x = malloc(nmemb * size);
	if (!x)
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
