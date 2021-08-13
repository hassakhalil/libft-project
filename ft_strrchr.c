#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	size_t	n;

	n = ft_strlen(s);
	while (0 <= n)
	{
		if (s[n] == c)
			return (&((char *)s)[n]);
		n--;
	}
	return (0);
}
#include <stdio.h>
int main()
{
	printf("%s\n", ft_strrchr("cccccc00", '\0'));
}
