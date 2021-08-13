#include <stdlib.h>
#include <stdio.h>

int	number_of_string(char const *s, char c)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i] != c && s[i] != '\0')
		{
			j = 1;
			i++;
		}
		if (j == 1)
			n++;
		i++;
	}
	return (n);
}

int	*string_size_table(int number_of_string, char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	int	*n;

	n = malloc((number_of_string + 1) * 4);
	if (n == 0)
		return (0);
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i] != c && s[i] != '\0')
		{
			j++;
			i++;
		}
		if (j != 0)
		{
			n[k] = j + 1;
			k++;
		}
		i++;
	}
	if (j != 0)
		n[k] = 0;
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**x;
	int	*n;
	int	i;
	int	j;
	int	k;

	n = string_size_table(number_of_string(s, c), s, c);
	if (n == 0)
		return (0);
	i = 0;
	j = 0;
	while (n[i] != 0)
	{
		j = n[i] + j;
		i++;
	}
	x = malloc(j + sizeof(NULL));
	if (x == 0)
		return (0);
	i = 0;
	while (n[i] != 0)
	{
		x[i] = malloc(n[i]);
		if (x[i] == 0)
			return (0);
		i++;
	}
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i] != c && s[i] != '\0')
		{
			x[k][j] = s[i];
			j++;
			i++;
		}
		if (j != 0)
		{
			x[k][j] = '\0';
			k++;
		}
		i++;
	}
	x[k] = NULL;
	free (n);
	return (x);
}

#include <stdio.h>
int main ()
{
	char	**x;
	int	i = 0;
	x = ft_split("wetrtwerweroooooooootwtwerotweter", '\0');
	while (x[i] != NULL)
	{
		printf("[%s]\n", x[i]);
		i++;
	}
	i = 0;
	while (x[i] != NULL)
	{
		free (x[i]);
		i++;
	}
	free (x[i]);
	free (x);
}
