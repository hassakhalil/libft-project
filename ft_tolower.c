#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

#include <stdio.h>

int main ()
{
	int c = 70;
	printf("%c\n", c);
	printf("%c\n", ft_tolower(c));
}

