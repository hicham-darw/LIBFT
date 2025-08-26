#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb >= 0)
	{
		c = (nb % 10) + 48;
		if (nb >= 10)
			ft_putnbr(nb / 10);
		write(1, &c, 1);
	}
	else
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
}
