#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0' && big[i + j] == little[j] && (i + j) < len)
			j++;
		if (little[j] == '\0')
			return (&((char *)big)[i]);
		i++;
	}
	return (0);
}
#include <stdio.h>
int main ()
{
	printf("%s\n", ft_strnstr("hello hello how are you world", "how", 0 ));
}
