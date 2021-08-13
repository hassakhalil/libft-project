int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
#include <stdio.h>
int main ()
{
	int c =127;
	printf("%d\n", ft_isascii(c));
}
