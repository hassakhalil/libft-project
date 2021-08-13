int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

#include <stdio.h>
int main ()
{
	int c = 96;
	printf("%d\n", ft_isalpha(c));
}
