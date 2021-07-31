int	ft_interative_factorial(int nb)
{
	int i;
	
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	while (nb)
	{
		i *= nb--;
	}
	return (i);
}


