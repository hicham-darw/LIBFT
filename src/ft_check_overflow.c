#include "libft.h"

int	ft_check_overflow(unsigned int res, char c, int sign)
{
	if((res * 10) + (c - 48) >= INTMAX)
		if((res * 10) + (c - 48) == INTMAX)
		{
			return INTMAX;
		}
		else 
		{
			if(sign == 1)
				return INTMAX;
			else 
				return INTMIN;
		}			
	else
		return 0;
}
