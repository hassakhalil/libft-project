#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	printf("mine : %lu\n", ft_strlcat("hello", "hello", 0));
	printf("system : %lu\n", strlcat("hello", "hello", 0));
	
}
