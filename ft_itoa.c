#include <stdlib.h>
int	string_size(long k, int sign)
{
	int	i;

	i = 1;
	while (k > 9)
	{
		k = k / 10;
		i++;
	}
	i++;
	if (sign == -1)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	 int	i;
	 int	sign;
	long	k;
	char	*s;

	k = n;
	sign = 1;
	if (k < 0)
		k = k * (sign = -1);
	s = malloc((i = string_size(k, sign)) + 1);
	if (!s)
		return (0);
	s[i - 1] = '\0';
	k = (long)n * sign;
	while (k > 9)
	{
		s[i - 2] = (k % 10) + '0';
		k = k / 10;
		i--;
	}
	s[i - 2] = k + '0';
	if (!(i - 3))
		s[i - 3] = '-';
	return (s);
}
#include <stdio.h>
int main ()
{
	char *s;
	printf("%s\n", s = ft_itoa(2147483647));
	free(s);
}
