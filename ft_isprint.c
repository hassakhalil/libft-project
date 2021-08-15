#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	return (0);
}

#include <stdio.h>
int main ()
{
	int c  = 46;
	printf("%d\n", ft_isprint(c));
}
