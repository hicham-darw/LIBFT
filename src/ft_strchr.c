#include	<string.h>

const char	*ft_strchr(const char *str, int c)
{
	while(*str)
	{
		if(*str == (unsigned char)c)
			return str;
		str++;
	}
	return (c == '\0') ? str: NULL;
}
