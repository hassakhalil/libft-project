#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	k;

  if (!s1  || !set)
    return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	k = ft_strlen(s1);
	while (k > 0 && ft_strchr(set, s1[k - 1]))
		k--;
	return (ft_substr(s1, 0, k));
}
