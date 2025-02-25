#include	<string.h>

char	*ft_strrchr(char *str, int c)
{
	char *ptr;
	int i ;

	if( !str )
		return NULL;
	i = 0;
	while(str[i])
	{
		if(str[i] == (unsigned char)c)
			ptr = &str[i];
		str++;
	}
	return ptr;
}
