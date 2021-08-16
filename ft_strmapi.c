#include "libft.h"

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
