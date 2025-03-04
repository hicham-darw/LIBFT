#include "libft.h"

void	ft_capital_char(char j, char *i)
{
	if(j >= 'A' && j <= 'Z')
	{
		if(*(i) >= 'A' && *(i) <= 'Z')
			*(i) += 32;
	}
	else if(j >= 'a' && j <= 'z')
	{
		if(*(i) >= 'A' && *(i) <= 'Z')
			*(i) += 32;
	}
	else if(j >= '0' && j <= '9')
	{
		if(*(i) >= 'A' && *(i) <= 'Z')
			*(i) += 32;
	}
	else if((j >= 32 && j <= 47) || (j >= 58 && j <= 64) || (j >= 91 && j <= 96) || (j >= 123 && j <= 126))
	{
		if(*(i) >= 'a' && *(i) <= 'z')
			*(i) -= 32;
	}
}
