#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
#include <stdio.h>
int main ()
{
	int c = 100;
	printf("%d\n", ft_isalnum(c));
}
