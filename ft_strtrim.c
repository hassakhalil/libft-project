#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	k;

	while (*s1 && ft_strchr(set, *s1))
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
