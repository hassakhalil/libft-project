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

int	*string_size_table(int number_of_string)
{
	int	i;
	int	j;
	int	k;
	int	*n;

	n = malloc((number_of_string(s, c) + 1) * 4);
	if (n = 0)
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
			n[k] = malloc(j + 1);
			if (n[k] == 0)
				return (0);
			n[k] = j + 1;
			k++;
		}
		i++;
	}
	n[k] = malloc(4);
	if (n[k] = 0)
		return (0);
	n[k] = 0;
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**x;
	int	*n;
	int	total;
	int	i;

	n = string_size_table(number_of_string(s, c));
	if (n == 0)
		return (0);
	while (n[i] != 0)
	{
		
	}
	return (x);
}

#include <stdio.h>
int main ()
{
	char	**x;
	
	x = ft_split("hello----world-", '-');
	printf("%s\n", x[0]);
}
