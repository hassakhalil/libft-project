#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	 int	i;
	 int	j;
	char	*s;

	s = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !s)
		return (0);
	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		s[i + j] = s2[j];
		j++;
	}
	s[i + j] = 0;
	return (s);
}

#include <stdio.h>

int main ()
{
	char s1[] = "hello";
	char s2[] = "how are you today";
	printf("%s\n", ft_strjoin(s1, s2));
}
