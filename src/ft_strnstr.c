#include	<string.h>

size_t	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	char *ptr;
	int i, j, cmp;
	
	if( !to_find )
		return str;
	i = 0;
	while(i < n && str[i])
	{
		if(str[i] == to_find[0])
		{
			if(ft_strncmp(str+i, to_find, ft_strlen(to_find)) == 0)
				return  str+i;
		}	
		i++;
	}
	return NULL;
}
