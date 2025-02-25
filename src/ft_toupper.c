int	ft_toupper(int c)
{
	int ret;
	if(c >= 97 && c <= 122)
		return c - 32;
	return c;
}
