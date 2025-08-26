#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_unsigned_nbr(unsigned int nbr)
{
	if (nbr < 10)
	{
		ft_putchar(nbr + 48);
		return ;
	}
	if (nbr > 10)
		ft_put_unsigned_nbr(nbr / 10);
	ft_putchar((nbr % 10) + 48);
}
