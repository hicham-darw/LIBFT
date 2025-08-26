#include <stdlib.h>

void	ft_delvector(char **vec)
{
	int	i;

	if (!vec || !*vec)
		return ;
	i = 0;
	while (vec[i])
	{
		free(vec[i]);
		vec[i] = NULL;
		i++;
	}
	free(vec);
	vec = NULL;
}
