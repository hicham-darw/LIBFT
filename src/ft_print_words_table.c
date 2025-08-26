#include <unistd.h>

static void	ft_putstr(char const *s)
{
	if (!s)
		return ;
	while (*s)
		write(1, s++, 1);
}

void	ft_print_words_table(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		ft_putstr(tab[i]);
		ft_putstr("\n");
		i++;
	}
}
