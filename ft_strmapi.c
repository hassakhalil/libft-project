#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == 0 || src == 0)
		return (0);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*copy;

	copy = malloc(ft_strlen(s) + 1);
	if (!s || !copy)
		return (0);
	return (ft_memcpy(copy, s, ft_strlen(s) + 1));
}

//delete this test function
char	f(unsigned int i, char c)
{
	i = 0;
	c = 'x';
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	        char	*new_s;
	unsigned int	i;

	new_s = ft_strdup(s);
	if (!s || !f || !new_s)
		return (0);
	i = 0;
	while (new_s[i])
	{
		new_s[i] = f(i, new_s[i]);
		i++;
	}
	return (new_s);
}

#include <stdio.h>
int main ()
{
	char	(*ptr)(unsigned int, char);

	ptr = &f;
	printf("%s\n", ft_strmapi(NULL, f));
}
