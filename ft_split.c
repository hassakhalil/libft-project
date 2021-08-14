#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == 0 || src == 0)
		return (0);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (dest == 0 || src == 0)
		return (0);
	if (src < dest)
	{
		i = n - 1;
		while (0 <= i)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return ((void *)dest);
}

int	number_of_strings(char const *s, char c)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	if (!s || !c)
		return (0);
	while (s[i])
	{
		j = 0;
		while (s[i] != c && s[i])
		{
			j = 1;
			i++;
		}
		if (j == 1)
			n++;
		if (s[i])
			i++;
	}
	return (n);
}

void	ft_split_1(char const *s, char c, char **x, int n)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (n > 0)
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i + j] != c && s[i + j])
			j++;
		x[k] = malloc(j + 1);
		if (!x)
			return ;
		if (ft_memmove(x[k], &s[i], j))
		{
			x[k][j] = 0;
			k++;
			n--;
			i = i + j;
		}
	}
	x[k] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**x;
	 int	n;

	n = number_of_strings(s, c);
	if (n == 0)
		return (0);
	x = malloc((n + 1) * sizeof(char *));
	if (!s || !c || !x)
		return (0);
	ft_split_1(s, c, x, n);
	return (x);
}

#include <stdio.h>
int main ()
{
	char	**x;
	int	i = 0;
	x = ft_split("1222==hello==there====how=are=youuuu=16", '=');
	//x = ft_split(NULL, 'a');
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
