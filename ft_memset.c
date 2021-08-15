#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}
#include <stdio.h>
int main ()
{
	//printf("%s\n", (char *)ft_memset("helllo", 0, 1));
	printf("%s\n", (char *)memset("hello", , 1));

}
