int	ft_isspace(int c)
{
	if( c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
		return 0;
	return 1;
}
