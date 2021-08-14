#include <stdlib.h>
#include <stdio.h>

int	number_of_strings(char const *s, char c)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	if (!s || !c)
		return (0);
	while (s[i] != 0)
	{
		j = 0;
		while (s[i] != c && s[i] != 0)
		{
			j = 1;
			i++;
		}
		if (j == 1)
			n++;
		if (s[i] != 0)
			i++;
	}
	return (n);
}
	
char	**ft_split(char const *s, char c)
{
	char	**x;
	 int	i;
	 int	j;
	 int	k;
	 int	l;
	 int	n;

	n = number_of_strings(s, c);
	if (n == 0)
		return (0);
	x = malloc((n + 1) * sizeof(char *));
	if (!s || !c ||!x)
		return (0);
	i = 0;
	j = 0;
	k = 0;
	while (n > 0)
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i + j] != c && s[i + j] != 0)
			j++;
		x[k] = malloc(j + 1);
		if (x[k] == 0)
			return (0);
		l = 0;
		while (i < i + j)
		{
			x[k][l] = s[i];
			i++;
			l++;
			j--;
		}
		if (l != 0)
		{
			x[k][l] = 0;
			k++;
			n--;
		}
	}
	x[k] = NULL;
	return (x);
}

#include <stdio.h>
int main ()
{
	char	**x;
	int	i = 0;
	x = ft_split(NULL, '=');
	if (x == 0)
		return (0);
	while (x[i] != NULL)
	{
		printf("[%s]\n", x[i]);
		free(x[i]);
		i++;
	}
	free (x[i]);
	free (x);
}
