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

#include <stdio.h>
int main ()
{
	char	(*ptr)(unsigned int, char);

	ptr = &f;
	printf("%s\n", ft_strmapi(NULL, ptr));
}
