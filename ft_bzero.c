#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

#include <stdio.h>

int main ()
{
	char *s = NULL;
	ft_bzero(s, 3);
	printf("%s\n", s);
}
