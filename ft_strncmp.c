#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
#include <stdio.h>
int main ()
{
	char s1[] = "aaa";
	char s2[] = "aab";
	printf("%d", ft_strncmp(s1, s2, 3));
}
