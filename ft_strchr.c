#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{	
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (0);
}

#include <stdio.h>
int main()
{
	const char *str = "kaka";
	printf("%s\n", ft_strchr(str, 'a'));
}
