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

#include <stdio.h>

int main ()
{
		char src[] = "helloooooooooooo";
		char dest[] = "fuckff";
		char det[] = "fuckff";
		ft_memcpy(dest, src, 5);
		memcpy(det, src, 5);
		printf("[%s]\n", det);
		printf("[%s]\n", dest);
}
