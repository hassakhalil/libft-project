#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	    char		*sub;

	i = 0;
	sub = malloc(len * sizeof(char) + 1);
	if (sub == 0)
		return (0);
	while (len > 0)
	{
		sub[i] = s[start + i];
		i++;
		len--;
	}
	sub[i] = '\0';
	return (sub);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	k;

	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	k = ft_strlen(s1);
	while (k > 0 && ft_strchr(set, s1[k - 1]))
		k--;
	return (ft_substr(s1, 0, k));
}

#include <stdio.h>

int main ()
{
	char s1[] = "\n   234 	 hello     98374\v\n	";
	char set[] = "\n  hd\v\t\r";
	printf("%s\n", ft_strtrim(s1, set));
}
