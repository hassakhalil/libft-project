#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	        char	*new_s;
	unsigned int	i;

	if (!s || !f)
		return (0);
  new_s = ft_strdup(s);
  if (!new_s)
    return (0);
	i = 0;
	while (new_s[i])
	{
		new_s[i] = f(i, new_s[i]);
		i++;
	}
	return (new_s);
}
