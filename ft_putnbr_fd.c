#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	x;

	x = n;
	if (x < 0)
	{
		write(fd, "-", 1);
		x = x * (-1);
	}
	if (x > 9)
	{
		ft_putnbr_fd(x / 10, fd);
		ft_putnbr_fd(x % 10, fd);
	}
	else
	{
		c = x + '0';
		write(fd, &c, 1);
	}
}



int main()
{
	ft_putnbr_fd(9, 1);
}
