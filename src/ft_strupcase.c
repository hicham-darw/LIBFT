#include	<stddef.h>

char	*ft_strupcase(char *str)
{
	int i ;
	
	if(str == NULL)
		return NULL;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i+=1;
	}

	return str;
}
