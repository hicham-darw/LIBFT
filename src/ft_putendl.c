#include <unistd.h>

void	ft_putendl(char const *str)
{
	int	i;

	if (!str)
		return ;
	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}
