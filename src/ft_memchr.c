#include	<string.h>

void	*ft_memchr(void *str, int c, size_t n)
{
	char *tmp_str;
	size_t i ;

	tmp_str = (char*)str;	
	i = 0;
	while(i < n)
	{
		if(tmp_str[i] == (unsigned char)c)
			return str+i;	
		i++;
	}
	return NULL;
}
