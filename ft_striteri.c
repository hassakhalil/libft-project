//test function
void	f(unsigned int i, char *a)
{
	*a = 'h';
	i = 1;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

#include <stdio.h>
int main ()
{
	char	dest = "hello world";
	void	(*f_ptr)(unsigned int, char*);
	f_ptr = &f;
	ft_striteri(dest , f_ptr);
	printf("%s\n", dest);
}
