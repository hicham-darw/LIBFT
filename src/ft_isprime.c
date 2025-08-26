int	ft_isprime(int nb)
{
	int	i;

	if (nb < 0)
		return (-1);
	else if (nb == 0 || nb == 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
