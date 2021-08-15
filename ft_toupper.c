#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

#include <stdio.h>

int main ()
{
	int c = 123;
	printf("%c\n", c);
	printf("%c\n", ft_toupper(c));
}
