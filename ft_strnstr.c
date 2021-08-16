#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (0);
	if (!little[0])
		return ((char *)big);
	i = 0;
	while (big[i] && (i < len))
	{
		j = 0;
		while (little[j] && (big[i + j] == little[j]) && ((i + j) < len))
			j++;
		if (!little[j])
			return (&((char *)big)[i]);
		i++;
	}
	return (0);
}
