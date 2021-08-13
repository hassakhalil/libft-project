#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	x;
	size_t	y;

	x = ft_strlen(dest);
	y = ft_strlen(src);
	if (size <= x)
		return (size + y);
	i = 0;
	while (src[i] != '\0' && (x + i) < (size - 1))
	{
		dest[x + i] = src[i];
		i++;
	}
	dest[x + i] = '\0';
	return (x + y);
}
#include <string.h>
#include <stdio.h>
int main ()
{
	char dest[] = "hehehe";
	char src[] = "hhhhh";
	printf("%ld\n", ft_strlcat(dest, src, 5));
	//printf("%s", strncat(dest, src, 10));
}
